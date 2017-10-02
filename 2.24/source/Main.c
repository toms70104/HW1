#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("耞块计计┪案计\n");
	printf("叫块计:");
	scanf_s("%d",&a);
	if (a % 2 == 0)
	{
		printf("块计%d案计",a);
	}
	if (a % 2 == 1)
	{
		printf("块计%d计",a);
	}


	system("pause");
	return 0;

}