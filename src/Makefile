include ../config.mk

OBJ = $(patsubst %.c, %.o, $(wildcard *.c))
JSFILES  = $(wildcard scripts/*.js)
CSSFILES = $(wildcard scripts/*.css)

all: neovimb webextension.subdir-all

clean: webextension.subdir-clean
	$(RM) neovimb neovimb.so $(OBJ)
	$(RM) scripts/scripts.h

neovimb: $(OBJ)
	@echo "${CC} $@"
	$(Q)$(CC) $(OBJ) $(LDFLAGS) -o $@

neovimb.so: $(OBJ)
	$(Q)$(CC) -shared $(OBJ) $(LDFLAGS) -o $@

$(OBJ): config.h ../config.mk

main.o: ../version.h

input.o: scripts/scripts.h

normal.o: scripts/scripts.h

setting.o: scripts/scripts.h

scripts/scripts.h: $(JSFILES) $(CSSFILES)
	$(Q)$(RM) $@
	@echo "create $@ from *.{css,js}"
	$(Q)for file in $(JSFILES) $(CSSFILES); do \
		./scripts/js2h.sh $$file >> $@; \
	done

config.h:
	@echo create $@ from config.def.h
	$(Q)cp config.def.h $@

%.o: %.c
	@echo "${CC} $@"
	$(Q)$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

%.subdir-all: config.h
	$(Q)$(MAKE) -C $*

%.subdir-clean:
	$(Q)$(MAKE) -C $* clean

-include $(OBJ:.o=.d)

.PHONY: all clean
