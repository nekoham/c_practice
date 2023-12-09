#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double area = (1.0 / 4.0)*(sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)));
	printf("Total area is %lf", area);

	return 0;
}
