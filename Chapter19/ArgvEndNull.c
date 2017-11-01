#include<stdio.h>

void main(int argc, char *argv[])
{
	int i = 0;
	printf("전달된 문자열의 수 : %d \n", argc);

	while (argv[i] !=NULL)
	{
		printf("%d번째 문자열 : %s \n", 1 + i, argv[i]);
		i++;
	}

}