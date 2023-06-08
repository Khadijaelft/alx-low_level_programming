#include "main.h"
/**
* _isalpha - function that checks for lowercase character.
* @c: character to be checked
* Return: 1 for alphabetic c and 0 for anything else
*/

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
