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
*strout = (char *) malloc(len * sizeof(char));
if (strout == NULL)
{
return (NULL);
}
memcpy(strout, str, len);
return (strout);
}
