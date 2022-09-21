#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: String to count
 * Return: String length
 */
int _strlen(char *s)
{
	int ray;

	for (ray = 0; *s != '\0'; ++s)
		ray++;

	return (ray);
}
