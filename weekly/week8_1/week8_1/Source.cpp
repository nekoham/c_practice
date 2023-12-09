#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num;
	printf("Number : ");
	scanf("%d", &num);
	
	//even odd checking
	if ((num/2)*2 == num)
	{
		printf("%d is even number", num);
	}
	else
	{
		printf("%d is odd number", num);
	}

	return 0;
}

//Problem No.95