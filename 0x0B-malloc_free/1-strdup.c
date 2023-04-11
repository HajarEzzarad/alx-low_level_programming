#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
size_t len = strlen(str) + 1;
char *dup_str = malloc(len);
if (dup_str == NULL)
{
return (NULL);
}
memcpy(dup_str, str, len);
return (dup_str);
}
