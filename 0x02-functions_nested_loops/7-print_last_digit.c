#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @nld: number's last digit result
* Return: value of the last digit
*/

int print_last_digit(int nld)
{
int pla;
pla = (nld % 10);
if (pla < 0)
{
pla = (-1 * pla);
}
_putchar(pla + '0');
return (pla);
}
