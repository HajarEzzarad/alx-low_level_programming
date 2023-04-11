#include "main.h"
#include <string.h>
#include <stdlib.h>

char *_strdup(char *str)
{
size_t len = strlen(str) + 1;
char* dup_str = malloc(len);
if (dup_str != NULL)
{
memcpy(dup_str, str, len);
}
return (dup_str);
}
