#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int a,b,c,max,min;
	printf("請輸入三個數字:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("max=%d\n", a);
	}
	else if (b > a && b > c)
	{
		printf("max=%d\n",b);
	}
	else
	{
		printf("max=%d\n",c);
	}
	if (a < b && a < c)
	{
		printf("min=%d\n", a);
	}
	else if (b < a && b < c)
	{
		printf("min=%d\n", b);
	}
	else
	{
		printf("min=%d\n", c);
	}
	


	system("pause");
	return 0;
}