#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x = 1, m = 1;

	while (x <= 10000) {
		int sum = 0;
		while (x >= m) {
			if (x % m == 0 && x != m) {
				sum = sum + m;
			}
			m = m + 1;
		}
		if (sum == x) {
			printf("%d ", sum);
		}
		x = x + 1;
		m = 1;
	}
}