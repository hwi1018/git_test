#include <stdio.h>
#define N 20
int main()
{
	int i,j,k;
	
	for(i=0;i<N;i++)//line
	{
		for(j=N-i-1;j>0;j--)//space
		{
			printf(" ");
		}
		for(j=0;j<i;j++)//star
		{
			printf("*");
		}
		for(j=0;j<i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
