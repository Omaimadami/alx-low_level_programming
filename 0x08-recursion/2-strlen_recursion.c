#inclide "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
