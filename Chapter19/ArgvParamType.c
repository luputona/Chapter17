#include<stdio.h>

void ShowAllString(int argc, char *argv[])
{
	int i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
}

void main4()
{
	char *str[3] =
	{
		"C Programming",
		"C++Programming",
		"JAVA Programming"
	};

	ShowAllString(3, str);

}