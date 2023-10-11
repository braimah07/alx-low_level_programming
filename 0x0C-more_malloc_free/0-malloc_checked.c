#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - allocates a dynamic memory
 * @b: size of memory to be created
 * Return: pointer to the memory space created
 */

=======
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked . allocate a dynamic memory
 * @b; size of memory to be created
 * Return; pointer to the memory space created
 */
 
>>>>>>> b04ff48 (My commit)
void *malloc_checked(unsigned int b)
{
	int *ptr;

<<<<<<< HEAD
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
=======
	ptr = malloc(b)
	if (ptr == NULL
	exit(98);
>>>>>>> b04ff48 (My commit)

	return (ptr);
}
