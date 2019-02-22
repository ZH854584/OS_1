//Zachary Hansen | my-grep.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char *argv[]){

if(argv[2]== NULL){
	char str [256];
	printf("You did not enter a valid file , enter a string to search instead:  \n");
	fgets(str,sizeof(str),stdin);
	puts(str);
}

for(int x = 2; argv[x]!= NULL; x++){
	FILE *fp = fopen(argv[x],"r");
	char buf [9999];
	if (fp == NULL){
		printf("my-grep cannot open file\n");
		exit(0);
	}
	while(!feof(fp)){
		if(fgets(buf,500,fp)!=NULL){
			if(strstr(buf, argv[1])!= NULL){
				printf("%s",buf);
			}
		}
	}
	fclose(fp);
}

return 0;
exit(0);
}

