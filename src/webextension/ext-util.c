#include <glib.h>
#include <string.h>
#include <unistd.h>
#include "../../include/config.h"
#include "ext-util.h"

/**
 * Evaluates given string as script and return if this call succeed or not.
 */
gboolean ext_util_js_eval(JSContextRef ctx, const char *script, JSValueRef *result)
{
	JSStringRef js_str;
	JSValueRef exc = NULL, res = NULL;

	js_str = JSStringCreateWithUTF8CString(script);
	res = JSEvaluateScript(ctx, js_str, JSContextGetGlobalObject(ctx), NULL, 0, &exc);
	JSStringRelease(js_str);

	if (exc) {
		*result = exc;
		return FALSE;
	}

	*result = res;
	return TRUE;
}

/**
 * Creates a temporary file with given content.
 *
 * Upon success, and if file is non-NULL, the actual file path used is
 * returned in file. This string should be freed with g_free() when not
 * needed any longer.
 */
gboolean ext_util_create_tmp_file(const char *content, char **file)
{
	int fp;
	ssize_t bytes, len;

	fp = g_file_open_tmp(PROJECT "-XXXXXX", file, NULL);
	if (fp == -1) {
		g_critical("Could not create temp file %s", *file);
		g_free(*file);
		return FALSE;
	}

	len = strlen(content);

	/* write content into temporary file */
	bytes = write(fp, content, len);
	if (bytes < len) {
		close(fp);
		unlink(*file);
		g_critical("Could not write temp file %s", *file);
		g_free(*file);

		return FALSE;
	}
	close(fp);

	return TRUE;
}

/**
 * Returns a new allocates string for given value reference.
 * String must be freed if not used anymore.
 */
char* ext_util_js_ref_to_string(JSContextRef ctx, JSValueRef ref)
{
	char *string;
	size_t len;
	JSStringRef str_ref;

	g_return_val_if_fail(ref != NULL, NULL);

	str_ref = JSValueToStringCopy(ctx, ref, NULL);
	len     = JSStringGetMaximumUTF8CStringSize(str_ref);

	string = g_new0(char, len);
	JSStringGetUTF8CString(str_ref, string, len);
	JSStringRelease(str_ref);

	return string;
}
