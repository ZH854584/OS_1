//Zachary Hansen | my-cat.c
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	for(int x =1; argv[x]!=NULL;x++){
	FILE *fp = fopen(argv[x],"r");
	char buf [9999];
	if (fp == NULL){
		printf("cannot open file\n");
		exit(1);
	}
	while(fgets(buf,500,fp)!=NULL){
		printf("%s",buf);
	}

	fclose(fp);
	}
	return 0;

}

