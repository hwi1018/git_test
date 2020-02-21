#include <stdio.h>
#include <iostream>
using namespace std;
int Min(int a, int b)
{
	return a<b?a:b;
}
int main()
{
	int n,i;
	int p_time[1001];
	int greedy[1001];
	int min=1002;
	cin>>n;//사람 수 입력 
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&p_time[i]);
	
		if(min>p_time[i])
		{	
			min=p_time[i];
		}
	}
	
	return 0;
 } 
