#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - printsif the number is positive,negative or 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = (n % 10);
	if (l_digit > 5)
		printf("the last digit of %d is %d and is greater than 5\n", n, l_digit);
	else if (l_digit = 0)
		printf("the last digit of %d is %d and is equal to zero\n", n, l_digit);
	else if (l_digit < 6)
		printf("the last digit of %d is %d and is less than six not zero\n", n, l_digit);
	return (0);
}
