#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string>

int main()
{
	char input[100], * p;
	printf("Input : ");
	scanf("%s", input);
	printf("Output : %s\n", input);

	while (input[0] != '\0')
	{
		input[strlen(input) - 1] = '\0';
		printf("         %s\n", input);
	}

	return 0;
}

//problem no.65