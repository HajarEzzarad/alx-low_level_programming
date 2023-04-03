#ifndef MAIN_H
#define MAIN_H

/*
 * file : main.h
 * its a heder file containing protypes for all my functiond
 */

int _putchar(char c)
{
	return(write(1,&c,1));
}

void *_memset(void *s,char b,unsigned int a);
#endif
