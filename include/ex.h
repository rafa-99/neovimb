#ifndef _EX_H
#define _EX_H

#include "config.h"
#include "main.h"

void ex_enter(Client *c);
void ex_leave(Client *c);
VbResult ex_keypress(Client *c, int key);
void ex_input_changed(Client *c, const char *text);
gboolean ex_fill_completion(GtkListStore *store, const char *input);
VbCmdResult ex_run_file(Client *c, const char *filename);
VbCmdResult ex_run_string(Client *c, const char *input);

#endif /* end of include guard: _EX_H */
