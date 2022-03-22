#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
<<<<<<< HEAD
 * On error, -1 is returned, and error is there returned
 *@c: The character to print
 * Return: on success 1.
=======
 *@c: The character to print
 * Return: on success 1.
 *On error, -1 is returned, and error is there returned
>>>>>>> 056ab651985918809ef966173e817ec4d42f5629
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
