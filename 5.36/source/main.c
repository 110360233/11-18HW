#include<stdio.h>
#include<stdlib.h>

void Hol(int N, int from, int to, int ram);

int main(void)
{
	int N, from, to, ram;
	printf("N from to ram");
	scanf_s("%d %d %d %d",&N,&from,&to ,&ram );
	Hol(N, from, to, ram);
	system("pause");
	return 0;
}

void Hol(int N, int from, int to, int ram)
{
	if (N == 1)
	{
		printf("%c --> %c\n", from+64, to+64);
		return;
	}
	Hol(N - 1, from,ram ,to );
	printf("%c --> %c\n", from+64, to+64);
	Hol(N - 1, ram,to ,from );
	//printf("\n%d\n",N);
}