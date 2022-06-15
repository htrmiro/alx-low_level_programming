#include "main.h"
/**
 *strncpy - copies a string
 *@dest: string
 *@src: string
 *@n: amount of bytes from src.
 *Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}

