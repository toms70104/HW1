#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("�P�_��J���Ʀr���_�Ʃΰ���\n");
	printf("�п�J�@�ӼƦr:");
	scanf_s("%d",&a);
	if (a % 2 == 0)
	{
		printf("�A��J����%d������",a);
	}
	if (a % 2 == 1)
	{
		printf("�A��J����%d���_��",a);
	}


	system("pause");
	return 0;

}