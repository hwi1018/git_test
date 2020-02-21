#include <stdio.h>

int main()
{
	int info[5][2];//5명 학생, 수학,영어 
	int total[2]={};//수학,영어 총합 
	int i,j;
	
	for(i=0;i<5;i++)
	{
		scanf("%d %d",&info[i][0],&info[i][1]);
	}
	for(i=0;i<5;i++)
	{
		total[0]+=info[i][0];//수학점수 
		total[1]+=info[i][1];//수학점수 
	}
	
	printf("수학 총:%d, 영어 총:%d",total[0],total[1]); 
	return 0;
 } 
