#include <stdio.h>
/**
 * main - print numbers 00 to 179
 * description - nested loop
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;

for (a = 0; a < 100; a++)
{
putchar('0' + a / 10);
putchar('0' + a % 10);
if (!(a == 179))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
