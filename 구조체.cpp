#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5
typedef struct student{
	
	int number;
	char name[20];
	double grade;
}STUDENT;

int main()
{
	STUDENT list[SIZE];//�л� 5�� 
	int i;
	
	for(i=0;i<SIZE;i++)
	{
		printf("�й�:");
		scanf("%d",&list[i].number);
		printf("�̸�:");
		scanf("%s",&list[i].name);
		printf("����:");
		scanf("%lf",&list[i].grade);
	}
	for(i=0;i<SIZE;i++)
	{
		printf("%d, %s,%.2lf",list[i].number,
		list[i].name, list[i].grade);
	 } 
	 
	return 0;
}
