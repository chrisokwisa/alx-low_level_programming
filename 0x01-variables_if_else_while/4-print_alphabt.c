#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 if success
 */
int main(void)

{
char ch = 'a';
while(ch <= 'z')

{
if (ch != 'e' && ch != 'q')

{
putchar(ch);
}
ch++;
}
putchar('\n');

return (0);
}

