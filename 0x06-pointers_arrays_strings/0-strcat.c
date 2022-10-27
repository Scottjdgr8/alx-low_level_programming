#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src);
{
	int s1 = 0;
	int s2 = 0;

	while (*(dest + s1) != '\0')
	{
		s1++;
	}
	while (s2 >= 0)
	{
		*(dest + s1) = *(scr + s2);
		if (*(scr + s2) == '\0')
			break;
		s1++;
		s2++;
	}
	return (dest);
}

