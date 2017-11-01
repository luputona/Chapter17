#include<stdio.h>

void SoSimpleFunc(void)
{
	printf("I'm so simple");
}

void main2()
{
	int num = 20;
	void *ptr;

	ptr = &num; // 변수 num의 주소 값 저장
	printf("%p \n", ptr);

	ptr = SoSimpleFunc;
	printf("%p \n", ptr);

}