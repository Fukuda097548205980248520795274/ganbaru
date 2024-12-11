#include <stdio.h>

int main()
{
	int num1 = 35;
	int* p_num1 = &num1;

	int num2 = 40;
	int* p_num2 = &num2;

	int num3 = 60;
	int* p_num3 = &num3;

	printf("%d \n" , *p_num1);
	printf("%d \n" , *p_num2);
	printf("%d \n" , *p_num3);

	return 0;
}