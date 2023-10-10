#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked . allocate a dynamic memory
 * @b; size of memory to be created
 * Return; pointer to the memory space created
 */
 
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b)
	if (ptr == NULL
	exit(98);

	return (ptr);
}
