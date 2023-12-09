#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int x;
	scanf("%d", &x);

	while (x % 2 == 0) {
		printf("2 x ");
		x = x / 2;
	}

	for (int n = 3; n <= x/2; n = n + 2) {
		while (x % n == 0) {
			printf("%d x ", n);
			x = x / n;
		}
	}

	if (x > 1) {
		printf("%d ", x);
	}
	else {
		printf("\b\b");
	}

	printf("Enter number : %d\n", x);

	return 0;
}