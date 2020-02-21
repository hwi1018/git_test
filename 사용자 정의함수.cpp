#include <stdio.h>

int getdays(int month, int day)
{
	int i,sum=0;
	
	for(i=1;i<month;i++)
	{
		if(i==2)
		{
			sum+=28;
		}
		else if(i%2==0)
		{
			sum+=30;
		}
		else
		{
			sum+=31;
		}
	}
	return sum+day;
}

int main()
{
	int m,d;
	
	scanf("%d %d", &m,&d);
	
	printf("%d\n",getdays(m,d));
}
