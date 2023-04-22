#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * Null if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *c;
	char *d;

	while (*haystack != '\0')
	{
		c = haystack;
		d  = needle;

		while (*haystack != '\0' && *d != '\0' && *haystack == *d)
		{
			c++;
			d++;
		}
		if  (!*d)
			return (c);
		haystack = c + 1;
	}
	return (0);
}
