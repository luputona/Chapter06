#include<stdio.h>

void main()
{
	float num1 = 0;
	double num2 = 0;
	long double num3 = 0;

	printf("실수 입력 1(e 표기법으로):");
	scanf_s("%f", &num1);
	printf("입력된 실수 %f \n",num1);

	printf("실수 입력2 (e 표기법으로):");
	scanf_s("%lf",&num2);
	printf("입력된 실수 %f \n",num2);

	printf("실수 입력3 (e 표기법으로):");
	scanf_s("%Lf", &num3);
	printf("입력된 실수 %Lf \n", num3);


}