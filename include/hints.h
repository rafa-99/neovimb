#ifndef _HINTS_H
#define _HINTS_H

#include "main.h"

VbResult hints_keypress(Client *c, int key);
void hints_create(Client *c, const char *input);
void hints_fire(Client *c);
void hints_follow_link(Client *c, gboolean back, int count);
void hints_increment_uri(Client *c, int count);
gboolean hints_parse_prompt(const char *prompt, char *mode, gboolean *is_gmode);
void hints_clear(Client *c);
void hints_focus_next(Client *c, const gboolean back);

#endif /* end of include guard: _HINTS_H */
