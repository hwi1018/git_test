#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line=0;
	
	printf("file name:");
	scanf("%s",fname);
	
	printf("search word:");
	scanf("%s",word);
	
	if((fp=fopen(fname,"r"))==NULL)//fname을 읽을 수 없다면 
	{
		fprintf(stderr,"%s fail\n",fname);
		return 0;
	}
	while(fgets(buffer,256,fp))
	{
		line++;	
		if(strstr(buffer,word))
		{
			printf("라인%d에 단어%s가 발견\n",line,word);
		}
	} 
	fclose(fp);
	
	return 0;
	
 } 
