#include "main.h"
/**
 * _strlen_recursion - calculates the length of a string
 * @s: string used to determine its length
 * Return: integer value as the length of the string @s
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
