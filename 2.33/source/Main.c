#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d,e,total;
	printf("�o�O�@�ӭp��C��}���O�Ϊ��{��\n");
	printf("�п�J�C�Ѧ�p���{(KM)\n");
	scanf_s("%f", &a);
	printf("�п�J�C�[�ڨT�o������\n");
	scanf_s("%f", &b);
	printf("�п�J�C�[�ڨT�o����p���{��\n");
	scanf_s("%f", &c);
	printf("�п�J�C�Ѫ��樮�O\n");
	scanf_s("%f", &d);
	printf("�п�J�C�Ѫ��L���O\n");
	scanf_s("%f", &e);
	total = a*c / b + d + e;
	printf("�C�Ѷ}���W�Z����O��%f\n", total);
	system("pause");
	return 0;
}