#include <unistd.h>

/**
 * main - Entry point
 * 
 * Return: always 0(Success)
 */

int main(void)
{
char *mes = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t length = 59;
ssize_t result = write(2, mes, length);
if (result == 1)
{
return (1);
}
return (1);
}
