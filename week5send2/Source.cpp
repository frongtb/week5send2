#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
void calculatePow2(int);
int main()
{
	int input_1;
	scanf("%d", &input_1);
	while (input_1 >= 0 || input_1 < 0)
	{
		if (input_1 <= 50)
		{
			calculatePow2(input_1);
			return 0;
		}
		else
			calculatePow2(input_1);
		return 0;
	}

	return 0;
}
void calculatePow2(int input_1)
{
	printf("%.0f", pow(input_1, 2));
}