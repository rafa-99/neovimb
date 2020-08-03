#ifndef _NORMAL_H
#define _NORMAL_H

#include "config.h"
#include "main.h"

void normal_enter(Client *c);
void normal_leave(Client *c);
VbResult normal_keypress(Client *c, int key);
void pass_enter(Client *c);
void pass_leave(Client *c);
VbResult pass_keypress(Client *c, int key);

#endif /* end of include guard: _NORMAL_H */
