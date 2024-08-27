#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // Print the name of the file it was compiled from
    putchar(__FILE__);
    putchar('\n');
    return (EXIT_SUCCESS);
}
