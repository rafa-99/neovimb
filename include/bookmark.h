#ifndef _BOOKMARK_H
#define _BOOKMARK_H

#include "main.h"

gboolean bookmark_add(const char *uri, const char *title, const char *tags);
gboolean bookmark_remove(const char *uri);
gboolean bookmark_fill_completion(GtkListStore *store, const char *input);
gboolean bookmark_fill_tag_completion(GtkListStore *store, const char *input);
#ifdef FEATURE_QUEUE
gboolean bookmark_queue_push(const char *uri);
gboolean bookmark_queue_unshift(const char *uri);
char *bookmark_queue_pop(int *item_count);
gboolean bookmark_queue_clear(void);
#endif

#endif /* end of include guard: _BOOKMARK_H */

