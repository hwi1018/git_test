#include <stdio.h>

/*int main()
{
	FILE *fp=NULL;
	fp=fopen("output.txt","w");
	//쓰기모드 
	if(fp==NULL)
	{
		printf("파일열기 실패\n");
	}
	else
	{
		printf("파일열기 성공\n");

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
