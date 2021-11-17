#include<stdio.h>
#include<stdlib.h>

unsigned long long int fibonacci(unsigned int n);


int main(void)
{
	int num;
	printf("Which fibonacci number you want?");
	scanf_s("%d", &num);
	printf("%lld\n", fibonacci(num));
	printf("%llu", fibonacci(UINT_MAX));
//	printf("%llu");
}
unsigned long long int fibonacci(unsigned int n)
{
	unsigned int i = 0, j = 1,c;
	unsigned long long int ans;
	if (n == 1)
	{
		ans = i;
	}
	else if (n == 2)
	{
		ans = j;
	}
	else
	{
		for (c = 1; c  <= n - 2; c++)
		{
			ans = i + j;
			i = j;
			j = ans;
			if (i>j)
			{
				break;
			}
		}
	}
	return ans;
}