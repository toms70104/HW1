#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d,e,total;
	printf("這是一個計算每日開車費用的程式\n");
	printf("請輸入每天行駛里程(KM)\n");
	scanf_s("%f", &a);
	printf("請輸入每加侖汽油的價格\n");
	scanf_s("%f", &b);
	printf("請輸入每加侖汽油的行駛里程數\n");
	scanf_s("%f", &c);
	printf("請輸入每天的行車費\n");
	scanf_s("%f", &d);
	printf("請輸入每天的過路費\n");
	scanf_s("%f", &e);
	total = a*c / b + d + e;
	printf("每天開車上班的花費為%f\n", total);
	system("pause");
	return 0;
}