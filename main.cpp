#include <stdio.h>

int main()
{
	int num = 35;
	int* p_num = &num;

	int num2 = 40;
	int* p_num2 = &num2;

	printf("%d \n" , *p_num);
	printf("%d \n" , *p_num2);

	return 0;
}