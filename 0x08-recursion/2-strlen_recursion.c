#include "main.h"

/**
* int _strlen_recursion : return the length of a string.
* @s : string.
* return : return length of a string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0') 
{ 
return 0;
}
else
{
return 1 + getStringLength(s + 1); // recursive call
}
}
