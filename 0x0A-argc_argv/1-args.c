#include <stdio.h>
/**
 *main - programs entry point
 *@argc: count command line
 *@argv: argument vector
 *
 *Return: zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
