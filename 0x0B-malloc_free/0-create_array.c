#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars, and initializes it with a specific char. 
 * @size: used as a storage variable
 * @c: used as a storage variable
 * Return: returns pointer value
 */

char *create_array(unsigned int size, char c)

{
	char *a;
	unsigned int i;

	a = malloc(sizeof(c) * size);

	if (size == 0 && a == 0)
		return(NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
