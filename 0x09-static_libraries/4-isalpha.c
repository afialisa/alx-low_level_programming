#include "main.h"
/**
 * _isalpha - a function that checks for an alphabet
 * @c: char
 * Return: 1 if alphabet or 0, 0 if it's not
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
