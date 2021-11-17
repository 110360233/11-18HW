#include<stdio.h>
#include<stdlib.h>

int lcm(int n1,int n2);

int main(void)
{
	int num1, num2;
	printf("Enter two number I will output their LCM:");
	scanf_s("%d%d", &num1, &num2);
	printf("Their LCM is:%d", lcm(num1,num2));
}
int lcm(int n1, int n2)
{
	int i=1;
	while ((i%n1 != 0) || (i%n2 != 0))
	{
		i =i+ 1;
	}
	return i;
}