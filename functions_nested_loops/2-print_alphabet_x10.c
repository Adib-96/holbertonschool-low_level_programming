#include "main.h"

/**
print_alphabet_x10 - Prints ==> program that use a while loop
*to generate characters
*10 times from a..z in lower case.
*/


void print_alphabet_x10(void){
	int repeat = 0;
	while(repeat <= 9){
	
	int i = 97;
	while(i<=122){
		_putchar(i);
		i++;
	}
	repeat++;
	_putchar('\n');
	}
}
