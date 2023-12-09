#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, gcd;
	scanf("%d %d", &a, &b);
	printf("Enter first number : %d\n", a);
	printf("Enter second number : %d\n", b);

	if (a != 0 && b != 0) {
		for (int i = 1; i <= a && i <= b; i++) {
			if (a % i == 0 && b % i == 0) {
				gcd = i;
			}
		}
		printf("Greatest common divisor : %d", gcd);
	}
	else if (a != 0 && b == 0) {
		printf("Greatest common divisor : %d", a);
	}
	else if (a == 0 && b != 0) {
		printf("Greatest common divisor : %d", b);
	}
	else {
		printf("Greatest common divisor : 0");
	}

	return 0;
}