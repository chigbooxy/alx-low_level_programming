#include "main.h"
/**
* _strlen - Calculate the length of a string recursively.
* @s: The input string.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome_recursive - Check if a string is a palindrome recursively.
 * @s: The input string.
 * @start: The start index.
 * @end: The end index.
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
