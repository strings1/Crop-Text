#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "crop_h.h"
int main(int argc, char *argv[])
{
	int start,stop,count;
	//void* p;
	FILE *read, *write;
	start=0;
	stop=EOF;
	read=fopen(argv[2],"r");
	write=fopen(argv[3],"w");
	if(read==0 || write==0)
	{
		printf("NO FILE FOUND");
		exit(EXIT_FAILURE);
	}
	if(*(argv[1]) == '-')
	{
		stop=atoi(argv[1]+1);
	}
	else
	{
		/*
		p=strlen(argv[1])-strlen(strchr(argv[1],'-'))+1;
		start=atoi(argv[1]);
		stop=atoi(argv[1]+p);
		*/
		start=atoi(argv[1]);
		stop=atoi(strchr(argv[1],'-')+1);
	}
	count=stop-start;
	cropfile(&read,&write,start,count);
	fclose(read);
	fclose(write);
	return 0;
}