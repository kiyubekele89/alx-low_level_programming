#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
  int result;
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
  if (result == -1) // Check for errors
    {
        perror("write"); // Print an error message
        return 1; // Exit with a non-zero code
    }
	return (1);
}
