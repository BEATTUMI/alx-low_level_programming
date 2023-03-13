#include "main.h"

/**
 * _pow_recursion - Return the value x raised to power of y
 * @x: the value to be multipy
 * @y: the times to multiply the value
 *
 * Return: the value multiplied by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	
	if (y == 0)
		return (1);
	
	return (x * _pow_recursion(x, y - 1));
}

