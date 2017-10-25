#include<stdio.h>

void main1()
{
	int num1;
	int num2;
	int num3;

	printf("세 개의 정수 입력: ");
	scanf_s("%d %o %x",&num1, &num2,&num3);

	printf("입력된 정수 10진수 출력 :");
	printf("%d %d %d \n",num1,num2,num3);

}