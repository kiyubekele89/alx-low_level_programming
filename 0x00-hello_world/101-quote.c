#include <unistd.h>

int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t length = 59;
ssize_t result = write(2, message, length);
if (result == -1)
{
return (1);
}
return (0);
}
