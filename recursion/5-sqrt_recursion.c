/**
 * radical - Program to find the sq_root
 * @sq_root: sq_root of the number
 * @square: the square number
 * Return: return the square root of a number.
*/

int radical(int sq_root, int square)
{
if (sq_root * sq_root == square)
return (sq_root);
if (sq_root * sq_root > square)
return (-1);
return (radical(sq_root + 1, square));
}

/**
 * _sqrt_recursion - program to find the sqrt.
 * @n: the square number
 * Return: The square root with a request
 * to radical function to do the job
*/

int _sqrt_recursion(int n)
{
return (radical(1, n));
}

