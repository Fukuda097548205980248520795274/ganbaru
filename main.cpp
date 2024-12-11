#include <stdio.h>

int main()
{
	int num = 35;
	int* p_num = &num;

	printf("%d \n" , *p_num);

	return 0;
}