#include <stdio.h>

/*int main()
{
	FILE *fp=NULL;
	fp=fopen("output.txt","w");
	//������ 
	if(fp==NULL)
	{
		printf("���Ͽ��� ����\n");
	}
	else
	{
		printf("���Ͽ��� ����\n");

	}
	fputc('H',fp);
	fputc('E',fp);
	fputc('L',fp);
	fputc('L',fp);
	fputc('O',fp);
	
	fclose(fp);
	return 0;
 }*/
 
 int main()
 {
 	FILE *fp=NULL;
 	int c;
 	
 	fp=fopen("input.txt","r");
 	if(fp==NULL)
 	{
 		printf("fail\n");
	}
	else
	{
		printf("success\n");
	}
	while((c=fgetc(fp)!=EOF))
	{
		putchar(c);
	}
	fclose(fp);
	 return 0;
  } 
