#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 **/
int main(void)
{
int ch;
for (ch = 'a' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return(0);
}
