#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	char input[500];
	printf("Enter input : ");
	scanf("%[^\n]", input);
	printf("%c", input[strlen(input) - 1]);

	return 0;
}

//Question 57