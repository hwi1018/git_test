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
	STUDENT list[SIZE];//학생 5명 
	int i;
	
	for(i=0;i<SIZE;i++)
	{
		printf("학번:");
		scanf("%d",&list[i].number);
		printf("이름:");
		scanf("%s",&list[i].name);
		printf("학점:");
		scanf("%lf",&list[i].grade);
	}
	for(i=0;i<SIZE;i++)
	{
		printf("%d, %s,%.2lf",list[i].number,
		list[i].name, list[i].grade);
	 } 
	 
	return 0;
}
