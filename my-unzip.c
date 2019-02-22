//Zachary Hansen | my-unzip.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//This function appends a char to a char array.
void append_c(char* s, char i)
{
	char char_string[1024];
	sprintf(char_string,"%c",i);
	strcat(s,char_string);
}
int main (int argc, char *argv[])
{
	//This loop will continue until there are no files left.
	for(int x = 1;x != argc;x++){
		FILE *fp = fopen(argv[x],"r");
		char buf [sizeof(&fp)];
		char output[sizeof(&fp)];
		//File = Null handler.
		if (fp == NULL)
		{
			printf("cannot open file\n");
			exit(1);
		}
		//File contents = Null handler.
		if(fgets(buf,500,fp)!=NULL)
		{
			fgets(buf,500,fp);
		}
		char cha = ('\0');
		int cou = 0;
		//loop appends the selected char to the output list
		for (int x = 0;buf[x]!= '\0'; x++)
		{
			cha = buf[x+1];
			cou = buf[x];
			//loop keeps track the char count 
			while (cou > 0)
			{
				append_c(output,cha);
				cou--;
			}
			x++;
		}
	fclose(fp);
	}
	return 0;
}

