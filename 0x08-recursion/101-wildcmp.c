#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2. It can contains a * as a special character.
 * Return: 1 if are identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
else if (*s2 == '*') {
if (*(s2+1) == '\0')
{
return (1);
}
if (*s1 != '\0' && wildcmp(s1+1, s2))
{
return (1);
}
return (wildcmp(s1, s2+1));
}
else if (*s1 == *s2)
{
return (wildcmp(s1+1, s2+1));
}
else
{
return (0);
}
}
