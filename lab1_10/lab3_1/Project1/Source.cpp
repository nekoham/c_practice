#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, plus;
	scanf("%d", &num);
	printf("%d -> ", num);

	while (num >= 10) {
		int result = 0;
		while (num >= 1) {
			plus = num % 10;
			num = num / 10;
			result = result + plus;
		}
		num = result;
		printf("%d -> ", result);
	}
	printf("\b\b\b");
	printf("   ");
	return 0;
}
