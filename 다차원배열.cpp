#include <stdio.h>

int main()
{
	int info[5][2];//5�� �л�, ����,���� 
	int total[2]={};//����,���� ���� 
	int i,j;
	
	for(i=0;i<5;i++)
	{
		scanf("%d %d",&info[i][0],&info[i][1]);
	}
	for(i=0;i<5;i++)
	{
		total[0]+=info[i][0];//�������� 
		total[1]+=info[i][1];//�������� 
	}
	
	printf("���� ��:%d, ���� ��:%d",total[0],total[1]); 
	return 0;
 } 
