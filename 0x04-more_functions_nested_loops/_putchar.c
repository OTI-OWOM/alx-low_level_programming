#include <unistd.h>
/**
*_putchar - writes the character C to stdout
*@C: The Character to print
*Return: On Sucess 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
