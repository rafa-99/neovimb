#ifndef _MAP_H
#define _MAP_H

typedef enum {
    MAP_DONE,
    MAP_AMBIGUOUS,
    MAP_NOMATCH
} MapState;

void map_init(Client *c);
void map_cleanup(Client *c);
MapState map_handle_keys(Client *c, const guchar *keys, int keylen, gboolean use_map);
void map_handle_string(Client *c, const char *str, gboolean use_map);
void map_insert(Client *c, const char *in, const char *mapped, char mode, gboolean remap);
gboolean map_delete(Client *c, const char *in, char mode);
gboolean on_map_keypress(GtkWidget *widget, GdkEventKey* event, Client *c);

#endif /* end of include guard: _MAP_H */
