#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
<<<<<<< HEAD
 *@: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and error is there returned
=======
 *@c: The character to print
 *
 * Return: on success 1.
 *On error, -1 is returned, and error is there returned
>>>>>>> 2c76dc74a703a2ff618a8ee66007a905f97fdd66
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
<<<<<<< HEAD

=======
>>>>>>> 2c76dc74a703a2ff618a8ee66007a905f97fdd66
