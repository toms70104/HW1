#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int a,b;
	printf("耞材计琌材计计\n");
	printf("叫块ㄢ计:");
	scanf_s("%d%d",&a,&b);
	if (a % b == 0)
	{
		printf("%d%d计:\n", a, b);
	}
	if (a % b != 0)
	{
		printf("%dぃ%d计:\n", a, b);
	}
	system("pause");
	return 0;

}