#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
size_t s1_len, s2_len, i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
s1_len = strlen(s1);
s2_len = strlen(s2);
concat = malloc(sizeof(char) * (s1_len + s2_len + 1));
if (concat == NULL)
{
return (NULL);
}
for (i = 0; i < s1_len; i++)
{
concat[i] = s1[i];
}
for (j = 0; j < s2_len; j++, i++)
{
concat[i] = s2[j];
}
concat[i] = '\0';
return (concat);
}

