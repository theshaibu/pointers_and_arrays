#include <stdio.h>

/** main - printing the size, in bytes, of a pointer
 *
 * Return: Always0
 */
int main (void)
{
	int *p;

	printf("size of pointer: %lu\n", sizeof(p));
	return (0);
}

