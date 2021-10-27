#include <stdio.h>

int digit_counter(long long n);

int main(void) {
	long long n;
	do {
		printf("enter a positive number: ");
		scanf_s("%lld", &n);
	} while (n < 0);
	int d = digit_counter(n);
	printf("number %lld consists of %i digits\n", n, d);
}

int digit_counter(long long num) {
	int i;
	for (i = 0; num != 0; num /= 10, i++) {}
	return i;
}