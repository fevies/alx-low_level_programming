#include <stdio.h>
/**
 *main - prints arguments received
 *@argc: count
 *@argv: argument velocity
 *Return: zero for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
