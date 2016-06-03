#include <stdio.h>
#include <stdlib.h>
main()
{
		FILE *fp=NULL;
		char ch[1024];
		if((fp=fopen("111.txt","r+"))==NULL)
		{
				printf("cannot open the file!");
				exit(0);
		}
		while(!feof(fp))
		{
				fgets(ch, 1024, fp);
				printf("%s", ch);
		}
		//getch();
		fclose(fp);
}