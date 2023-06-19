#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints ==> This program will assign a random number
*The output of the program:
*The string Last digit of, followed by
*n, followed by
*the string is, followed by
*if the last digit of n is greater than 5: the string and is greater than 5
*if the last digit of n is 0: the string and is 0
*if the last digit of n is less than 6 and not 0:
*the string and is less than 6 and not 0
*Return: Always 0.
*/

int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
return (0);
}
