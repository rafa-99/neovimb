#ifndef _FILE_STORAGE_H
#define _FILE_STORAGE_H

#include <glib.h>

typedef struct filestorage FileStorage;
FileStorage *file_storage_new(const char *dir, const char *filename, int mode);
void file_storage_free(FileStorage *storage);
gboolean file_storage_append(FileStorage *storage, const char *format, ...);
char **file_storage_get_lines(FileStorage *storage);
const char *file_storage_get_path(FileStorage *storage);
gboolean file_storage_is_readonly(FileStorage *storage);

#endif /* end of include guard: _FILE_STORAGE_H */
