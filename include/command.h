#ifndef _COMMAND_H
#define _COMMAND_H

#include <gtk/gtk.h>
#include "main.h"

enum {
	COMMAND_YANK_ARG,
	COMMAND_YANK_URI,
	COMMAND_YANK_SELECTION
};

enum {
	COMMAND_SAVE_CURRENT,
	COMMAND_SAVE_URI
};

#ifdef FEATURE_QUEUE
enum {
	COMMAND_QUEUE_PUSH,
	COMMAND_QUEUE_UNSHIFT,
	COMMAND_QUEUE_POP,
	COMMAND_QUEUE_CLEAR
};
#endif

typedef void (*PostEditFunc)(const char *, Client *, gpointer);

gboolean command_search(Client *c, const Arg *arg, bool commit);
gboolean command_yank(Client *c, const Arg *arg, char buf);
gboolean command_save(Client *c, const Arg *arg);
#ifdef FEATURE_QUEUE
gboolean command_queue(Client *c, const Arg *arg);
#endif
gboolean command_spawn_editor(Client *c, const Arg *arg, PostEditFunc posteditfunc, gpointer data);

#endif /* end of include guard: _COMMAND_H */
