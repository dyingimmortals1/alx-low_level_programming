
#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: content is to be copied
 * @src: Source of data to be copied
 * @n: bytes of the memory
 *
 * Return: to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l = 0;

	/*Declaring While*/
	while (l < n)
	{
		*(dest + 1) = *(src + 1);
		l++;

	} /*End While*/


	return (dest);
}
