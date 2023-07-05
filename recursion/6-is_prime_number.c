#include "main.h"
/**
 *checker - Program to check for the primality
 *@n: number to be checked
 *@rem: remainder of the number
 *Return: 1 if prime 0 otherwise.
 */

int checker(int n, int rem)
{
if (n <= 1)
{
return (0);
}
else if (rem == 1)
{
return (1);
}
else if (n % rem == 0)
{
return (0);
}
else
{
return  (checker(n, rem - 1));
}
}
/**
 *is_prime_number - Program to check for the primality
 *with the help of the cheker function
 *@n : number to be checked
 *Return: checker return :)
 */
int is_prime_number(int n)
{
return (checker(n, n - 1));
}
