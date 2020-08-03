#ifndef _INPUT_H
#define _INPUT_H

#include "config.h"
#include "main.h"

void input_enter(Client *c);
void input_leave(Client *c);
VbResult input_keypress(Client *c, int key);
VbResult input_open_editor(Client *c);

#endif /* end of include guard: _INPUT_H */
