#include "main.h"


/**
 * swap_int - swaps values.
 * @a : pointer variable.
 * @b : pointer varibel.
 * Return : void .
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

