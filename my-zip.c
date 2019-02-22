//Zachary Hansen | my-zip.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//prints the output list to file.
int main (int argc, char *argv[])
{
	//loop continues until all files are read.
	for(int x = 1;x != argc;x++)
	{
		FILE *fp = fopen(argv[x],"r");
		FILE *fp_out = fopen("testzip.z","wb");
		char buf [256];
		//file = Null handler.
		if (fp == NULL)
		{
			printf("cannot open file\n");
			exit(1);
		}
		//file contents = Null
		if(fgets(buf,500,fp)!=NULL)
		{
			fgets(buf,500,fp);
		}
		//loop continues until the end of the buffer.
		for(int x = 0;buf[x]!= '\0';x++)
		{
			int cou = 1;
			char cha = buf[x];
			//loop calculates number of chars that are repeated
			while((buf[x+1]==cha))
			{
				x++;
				cou++;
			}
			if(cha != '\0')
			{
				fwrite(&cou,4,sizeof(&cou),fp_out);
				fwrite(&cha,1,sizeof(&cha),fp_out);
			}
		}
		fclose(fp);
	}
return 0;
}

