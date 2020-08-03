#include "config.h"
#ifdef FEATURE_AUTOCMD

#ifndef _AUTOCMD_H
#define _AUTOCMD_H

#include "main.h"

/* this values correspond to indices in events[] array in autocmd.c */
typedef enum {
	AU_ALL,
	AU_LOAD_STARTING,
	AU_LOAD_STARTED,
	AU_LOAD_COMMITTED,
	/*AU_LOAD_FIRST_LAYOUT,*/
	AU_LOAD_FINISHED,
	/*AU_LOAD_FAILED,*/
	AU_DOWNLOAD_STARTED,
	AU_DOWNLOAD_FINISHED,
	AU_DOWNLOAD_FAILED,
} AuEvent;

void autocmd_init(Client *c);
void autocmd_cleanup(Client *c);
gboolean autocmd_augroup(Client *c, char *name, gboolean delete);
gboolean autocmd_add(Client *c, char *name, gboolean delete);
gboolean autocmd_run(Client *c, AuEvent event, const char *uri, const char *group);
gboolean autocmd_fill_group_completion(Client *c, GtkListStore *store, const char *input);
gboolean autocmd_fill_event_completion(Client *c, GtkListStore *store, const char *input);

#endif /* end of include guard: _AUTOCMD_H */
#endif
