#include<stdio.h>

void main(int argc, char *argv[])
{
	int i = 0;
	printf("���޵� ���ڿ��� �� : %d \n", argc);

	while (argv[i] !=NULL)
	{
		printf("%d��° ���ڿ� : %s \n", 1 + i, argv[i]);
		i++;
	}

}