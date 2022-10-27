#include "main.h"


/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src);
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j >= 0)
	{
		*(dest + i) = *(scr + j);
		if (*(scr + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}

