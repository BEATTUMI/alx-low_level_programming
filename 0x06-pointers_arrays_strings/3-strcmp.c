#include "main.h"

/**
 * -trscmp -compares pointers to two strings.
 *  @s1: A pointer to the first string to be compared.
 *  @s2: A pointerto the second string to be compared.
 *  Return: If str1 , str2, the negatie difference of the first unmatched characters.
 *  If str1 == str2, 0.
 *  If str1 >str2, the positive differenc of the first unmatched characters.
 *
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
