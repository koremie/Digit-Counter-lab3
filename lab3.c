#include <stdio.h>

int digitCounter(long long num);

int main(void) 
{
	long long number;
	do 
	{
		printf("Enter a positive number: ");
		scanf_s("%lld", &number);
	} while (number < 0);

	printf("Number %lld consists of %i digits\n", number, digitCounter(number));
}

int digitCounter(long long num) 
{
	int digitCount;
	for (digitCount = 0; num != 0; num /= 10, digitCount++) {}
	return digitCount;
}