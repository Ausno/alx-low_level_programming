#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the char c to stdout
 * @c: The char to print
 *
 * Return: successful 1.
 * On err, -1 is being returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
