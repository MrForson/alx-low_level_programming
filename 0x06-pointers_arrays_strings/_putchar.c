#include <unistd.h>
/**
 * _putchar - display the characterc to stdout
 * @c: Print character
 * Return: on success 1
 * on error, -1 is returned, and error is set correctly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
