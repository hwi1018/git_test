#include <stdio.h>

//Â¦¼ö,È¦¼ö ÃÖ´ë°ª
#define N 5
int main()
{
	int arr[N];
	int i,oddMax,evenMax;
	
	oddMax=0;
	evenMax=0;
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)//even
		{
			if(evenMax<arr[i])
			{
				evenMax=arr[i];
			}
		}
		else//odd
		{
			if(oddMax<arr[i])
			{
				oddMax=arr[i];
			}
		}
	}
	printf("even:%d odd:%d",evenMax, oddMax);
	return 0;
 } 
