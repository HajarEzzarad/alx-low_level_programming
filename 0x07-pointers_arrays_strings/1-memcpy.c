#include "main.h"

/*
 * file : 1-memcpy.c
 * The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest
 * dest − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

src − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.

n − This is the number of bytes to be copied.
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for(i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
