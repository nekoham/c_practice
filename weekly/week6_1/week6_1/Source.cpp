#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	// find lower and upper count and print both of them.
	int lower = 0, upper = 0;
	char input[500], *p;
	p = input;
	printf("Enter your input : ");
	scanf("%s", input);
	
	for (int i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 65 && p[i] <= 90) { upper += 1; } // check uppercase
		if (p[i] >= 97 && p[i] <= 122) { lower += 1; } // check lowercase
	}

	printf(" Uppercase count : %d\n", upper);
	printf(" Lowercase count : %d", lower);

	return 0;
}
