#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	char *result = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (result == NULL)
		return NULL;

	strcpy(result, s1);
	strcat(result, s2);

	return result;
}
