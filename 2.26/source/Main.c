#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int a,b;
	printf("�P�_�Ĥ@�ӼƭȬO�_���ĤG�ӼƭȪ�����\n");
	printf("�п�J��ӼƦr:");
	scanf_s("%d%d",&a,&b);
	if (a % b == 0)
	{
		printf("%d��%d������:\n", a, b);
	}
	if (a % b != 0)
	{
		printf("%d����%d������:\n", a, b);
	}
	system("pause");
	return 0;

}