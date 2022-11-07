#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 ** str_concat - function that concatenates two strings
 ** @q1: string of chars
 ** @q2: string of chars
 ** Return: address of the newly allocated memory
 **/

char *str_concat(char *q1, char *q2)
{
	unsigned int len1, len2;
	unsigned int i, j;
	char *str_copy;
	char *tmp1 = q1;
	char *tmp2 = q2;

	if (q1 == NULL)
		q1 = "";
	if (q2 == NULL)
		q2 = "";

	i = 0;
	while (*q1++)
		i++;
	len1 = i;
	q1 = tmp1;

	i = 0;
	while (*q2++)
		i++;
	len2 = i;
	q2 = tmp2;

	str_copy = malloc((len1 + len2) * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);

	j = 0;
	while (j < len1)
	{
		str_copy[j] = q1[j];
		j++;
	}
	while (j < len1 + len2)
	{
		str_copy[j] = q2[j - len1];
		j++;
	}
	str_copy[j] = '\0';
	return (str_copy);
}
