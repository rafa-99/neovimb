#ifndef _EXT_UTIL_H
#define _EXT_UTIL_H

#include <glib.h>
#include <JavaScriptCore/JavaScript.h>

gboolean ext_util_create_tmp_file(const char *content, char **file);
gboolean ext_util_js_eval(JSContextRef ctx, const char *script, JSValueRef *result);
char* ext_util_js_ref_to_string(JSContextRef ctx, JSValueRef ref);

#endif /* end of include guard: _EXT_UTIL_H */
