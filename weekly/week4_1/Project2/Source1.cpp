#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m = 1;
	printf("Enter the number : ");
	scanf("%d", &n);
	int amount = n;
	
	for (int i = 1; i <= amount; i++) {
		int x = 1;
		int y = 1;
		if (amount != i) {
			while (y < m) {
				printf(" ");
				y += 1;
			}
			while (x <= 2 * n - 1) {
				printf("*");
				x += 1;
			}
		}
		else {
			break;
		}

		printf("\n");
		m += 1;
		n -= 1;
	}

	for (int j = amount; j >= 1; j--) {
		int x = 1;
		int y = 1;
		while (y < m) {
			printf(" ");
			y += 1;
		}
		while (x <= 2 * n - 1) {
			printf("*");
			x += 1;
		}

		printf("\n");
		m -= 1;
		n += 1;
	}

}