#include<stdio.h>

void SimpleAdder(int num1, int num2)
{
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
}
void ShowString(char *str)
{
	printf("%s \n", str);
}
void main1()
{
	char *str = "Function Pointer";
	int num1 = 10;
	int num2 = 20;

	void(*fptr1) (int, int) = SimpleAdder;
	void(*fptr2)(char*) = ShowString;

	//함수 포인터 변수에 의한 호출
	fptr1(num1, num2);
	fptr2(str);
}