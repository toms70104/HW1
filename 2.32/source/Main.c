#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height, weight,BMI;
	printf("�п�J�����M�魫:");
	scanf_s("%f%f",&height,&weight);
	BMI = weight / (height*height) * 10000;
	printf("�A��BMI��:%f\n\n",BMI);
	printf("BMI VALUES\n");
	printf("Underweight:less than 18.5\n");
	printf("Normal:between18.5 and 24.9\n");
	printf("overweight:between 25 and 29\n");
	printf("Obese : 30 or greater\n");
	
	
	system("pause");
	return 0;
}