version = 3.7.0
include config.mk

all: version.h src.subdir-all

version.h: Makefile $(wildcard .git/index)
	@echo "create $@"
	$(Q)v="$$(git describe --tags 2>/dev/null)"; \
	echo "#define VERSION \"$${v:-$(version)}\"" > $@

options:
	@echo "neovimb build options:"
	@echo "LIBS      = $(LIBS)"
	@echo "CFLAGS    = $(CFLAGS)"
	@echo "LDFLAGS   = $(LDFLAGS)"
	@echo "EXTCFLAGS = $(EXTCFLAGS)"
	@echo "CC        = $(CC)"

install: all
	@# binary
	install -d $(BINPREFIX)
	install -m 755 src/neovimb $(BINPREFIX)/neovimb
	@# extension
	install -d $(LIBDIR)
	install -m 644 src/webextension/$(EXTTARGET) $(LIBDIR)/$(EXTTARGET)
	@# man page
	install -d $(MANPREFIX)/man1
	@sed -e "s!VERSION!$(version)!g" \
		-e "s!PREFIX!$(PREFIX)!g" \
		-e "s!DATE!`date -u -r $(DOCDIR)/neovimb.1 +'%m %Y' 2>/dev/null || date +'%m %Y'`!g" $(DOCDIR)/neovimb.1 > $(MANPREFIX)/man1/neovimb.1
	@# .desktop file
	install -d $(DOTDESKTOPPREFIX)
	install -m 644 neovimb.desktop $(DOTDESKTOPPREFIX)/neovimb.desktop

uninstall:
	$(RM) $(BINPREFIX)/neovimb
	$(RM) $(DESTDIR)$(MANDIR)/man1/neovimb.1
	$(RM) $(LIBDIR)/$(EXTTARGET)
	$(RM) $(DOTDESKTOPPREFIX)/neovimb.desktop

clean: src.subdir-clean

sandbox:
	$(Q)$(MAKE) RUNPREFIX=$(CURDIR)/sandbox/usr PREFIX=/usr DESTDIR=./sandbox install

runsandbox: sandbox
	sandbox/usr/bin/neovimb

%.subdir-all:
	$(Q)$(MAKE) -C $*

%.subdir-clean:
	$(Q)$(MAKE) -C $* clean

.PHONY: all options install uninstall clean sandbox runsandbox
