#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    char *filename = __FILE__;
    while (*filename)
    {
        write(1, filename, 1);  // Write each character of the filename
        filename++;
    }
    write(1, "\n", 1);  // Write a newline character

    return (EXIT_SUCCESS);
}
