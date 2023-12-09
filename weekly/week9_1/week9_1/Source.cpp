#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	char input[500];
	printf("Enter input : ");
	scanf("%[^\n]", input);
	_strrev(input);

	printf("%c", input[0]);
	

	return 0;
}

//Question 57