#ifndef _EXT_PROXY_H
#define _EXT_PROXY_H

#include "main.h"

const char *ext_proxy_init(void);
void ext_proxy_eval_script(Client *c, char *js, GAsyncReadyCallback callback);
GVariant *ext_proxy_eval_script_sync(Client *c, char *js);
void ext_proxy_focus_input(Client *c);
void ext_proxy_set_header(Client *c, const char *headers);
void ext_proxy_lock_input(Client *c, const char *element_id);
void ext_proxy_unlock_input(Client *c, const char *element_id);
char *ext_proxy_get_current_selection(Client *c);

#endif /* end of include guard: _EXT_PROXY_H */
