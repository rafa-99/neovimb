#ifndef _SHORTCUT_H
#define _SHORTCUT_H

typedef struct shortcut Shortcut;

Shortcut *shortcut_new(void);
void shortcut_free(Shortcut *sc);
gboolean shortcut_add(Shortcut *sc, const char *key, const char *uri);
gboolean shortcut_remove(Shortcut *sc, const char *key);
gboolean shortcut_set_default(Shortcut *sc, const char *key);
char *shortcut_get_uri(Shortcut *sc, const char *key);
gboolean shortcut_fill_completion(Shortcut *c, GtkListStore *store, const char *input);

#endif /* end of include guard: _SHORTCUT_H */

