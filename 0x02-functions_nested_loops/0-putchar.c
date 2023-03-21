#include "main.h"
/**
 * main -a program that prints -putchar, followed by a new line 
 * return : 0
 */
int main(void)
{
	char *c='_putchar';
	while(*c)
	{
		-putchar(*c);
		c++;
	} 
	-putchar('\n');
	return 0;
}
