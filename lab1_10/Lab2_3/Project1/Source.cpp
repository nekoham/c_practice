#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	int n1 = 1;
	int n2 = 3;
	int n3 = 1;
	printf("Enter number : %d\n", x);

	if (x == 1) {
		printf("*");
	}
	else {
		while (n1 <= x) {
			printf("*");
			n1 = n1 + 1;
		}

		printf("\n");

		while (n2 <= x) {
			printf("*");
			for (int m = 3; m <= x; m++) {
				printf(" ");
			}
			printf("*\n");
			n2 = n2 + 1;
		}

		while (n3 <= x) {
			printf("*");
			n3 = n3 + 1;
		}
	}

	return 0;
}