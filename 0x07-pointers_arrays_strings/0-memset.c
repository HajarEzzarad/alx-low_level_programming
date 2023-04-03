#include "main.h"
/*
 * file : 0-memset.c
 * description :Write a function that fills memory with a constant byte.
 * The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
 *s : a pointer to the memory area to be filled.
  c : the caracter to fill the memery aera with.
a : the number of bytes to be filled.
 */
 void *_memset(char *s,char b,unsigned int a)
 {

	 unsigned int i;
	 for i=0;i<a;i++)
	 {
		*(s+i)=b;
	 }
	 return m;
 }
