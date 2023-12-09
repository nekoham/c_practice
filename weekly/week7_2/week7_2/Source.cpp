#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string>

int main()
{
	char input[100], * p;
	printf("Input : ");
	scanf("%s", input);
	printf("Output : %s\n", input);
	int num = strlen(input)-1;

	for (int j = 0; j < strlen(input); j++)
	{
		printf("         ");
		for (int i = 0; i < num; i++)
		{
			printf("%c", input[i]);
		}
		printf("\n");
		num--;
	}

	return 0;
}

//problem no.65