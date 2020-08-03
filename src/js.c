#include "../include/js.h"

#include "../include/config.h"

#include <JavaScriptCore/JavaScript.h>
#include <glib.h>
#include <webkit2/webkit2.h>

/**
 * Returns a new allocates string for given value javascript result.
 * String must be freed if not used anymore.
 */
char *js_result_as_string(WebKitJavascriptResult *res)
{
	JSGlobalContextRef cr;
	JSStringRef jsstring;
	JSValueRef jsvalue;
	gsize max;

	g_return_val_if_fail(res != NULL, NULL);

	jsvalue  = webkit_javascript_result_get_value(res);
	cr       = webkit_javascript_result_get_global_context(res);
	jsstring = JSValueToStringCopy(cr, jsvalue, NULL);
	max      = JSStringGetMaximumUTF8CStringSize(jsstring);
	if (max > 0) {
		char *string = g_new(char, max);
		JSStringGetUTF8CString(jsstring, string, max);

		return string;
	}
	return NULL;
}

