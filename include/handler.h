#ifndef _HANDLERS_H
#define _HANDLERS_H

typedef struct handler Handler;

Handler *handler_new();
void handler_free(Handler *h);
gboolean handler_add(Handler *h, const char *key, const char *cmd);
gboolean handler_remove(Handler *h, const char *key);
gboolean handler_handle_uri(Handler *h, const char *uri);
gboolean handler_fill_completion(Handler *h, GtkListStore *store, const char *input);

#endif /* end of include guard: _HANDLERS_H */

