#ifndef _COMPLETION_H
#define _COMPLETION_H

#include <glib.h>

#include "main.h"

typedef void (*CompletionSelectFunc) (Client *c, char *match);

enum {
	COMPLETION_STORE_FIRST,
#ifdef FEATURE_TITLE_IN_COMPLETION
	COMPLETION_STORE_SECOND,
#endif
	COMPLETION_STORE_NUM
};


void completion_clean(Client *c);
void completion_cleanup(Client *c);
gboolean completion_create(Client *c, GtkTreeModel *model,
		CompletionSelectFunc selfunc, gboolean back);
void completion_init(Client *c);
gboolean completion_next(Client *c, gboolean back);

#endif /* end of include guard: _COMPLETION_H */
