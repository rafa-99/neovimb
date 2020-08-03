#ifndef _EXT_DOM_H
#define _EXT_DOM_H

#include <glib.h>
#include <webkitdom/webkitdom.h>

gboolean ext_dom_is_editable(WebKitDOMElement *element);
gboolean ext_dom_focus_input(WebKitDOMDocument *doc);
char *ext_dom_editable_get_value(WebKitDOMElement *element);
void ext_dom_lock_input(WebKitDOMDocument *parent, char *element_id);
void ext_dom_unlock_input(WebKitDOMDocument *parent, char *element_id);

#endif /* end of include guard: _EXT-DOM_H */
