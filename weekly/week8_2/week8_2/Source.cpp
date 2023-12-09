#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num;
	bool checker = 1;
	printf("Number : ");
	scanf("%d", &num);

	//even odd checking
	for (int i = 0; i < num; i++)
	{
		if (checker == 1)
		{
			checker = 0;
		}
		else
		{
			checker = 1;
		}
	}
	if (checker == 1)
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