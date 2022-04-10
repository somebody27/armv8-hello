#include "reg.h"

/*
 * 
 *input: note the const
 *why: char *
 *
 */
int puts(const char *str)
{
	while (*str)
		*((unsigned int *) UART_BASE) = *str++;
	return 0;
}

void main(void)
{
	puts("Hello-2022-http-github-test\n");
	while (1);
}
