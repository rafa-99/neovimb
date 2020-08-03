#ifndef _SETTING_H
#define _SETTING_H

#include <gtk/gtk.h>

#include "main.h"

void setting_init(Client *c);
void setting_cleanup(Client *c);
VbCmdResult setting_run(Client *c, char *name, const char *param);
gboolean setting_fill_completion(Client *c, GtkListStore *store, const char *input);

#endif /* end of include guard: _SETTING_H */
