#include "main.h"
/**
 *_strlen_recursion - size
 * @s: pointer to string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)

	{
		return (0);

	}

	return (1 + strlen_recursion(++s));

}
