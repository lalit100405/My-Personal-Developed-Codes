#include<stdio.h>

struct Demo
{
	int i;
	char c1;
	char c2;
	float f;
	char c3;
	int j;

};
int main()
{
	struct Demo obj1;

	printf("%lu\n",(sizeof obj1) );

	return 0;
}