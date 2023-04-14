#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *var;
	unsigned int lns1, lns2, lnvar, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lns1 = 0; s1[lns1] != '\0'; lns1++)
		;

	for (lns2 = 0; s2[lns2] != '\0'; lns2++)
		;

	if (n > lns2)
		n = lns2;

	lnvar = lns1 + n;

	var = malloc(lnvar + 1);

	if (var == NULL)
		return (NULL);

	for (i = 0; i < lnvar; i++)
		if (i < lns1)
			var[i] = s1[i];
		else
			var[i] = s2[i - lns1];

	var[i] = '\0';

	return (var);
}
