#include <stdio.h>

int nCr(int n,int r)
{
	if(r==0 || r==n)
	{
		return 1;
	}
	else
	{
		return nCr(n-1,r-1)+ nCr(n-1,r);
	}
}
int main()
{
	int n,r;
	scanf("%d %d",&n,&r);
	//nCr��� 
	printf("%d",nCr(n,r));
}
