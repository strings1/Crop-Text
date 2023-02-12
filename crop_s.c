#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "crop_h.h"
void cropfile(FILE** read, FILE** write, int start,int count)
{
	char buffer[257];
	while(start--)
	{
		fgets(buffer,257,*read);
	}
	while(count-- && !feof(*read))
	{
		fgets(buffer,257,*read);
		fprintf(*write,"%s",buffer);
	}

}

/*
char* get_name(int n)
{
	char *name =0 ;
	name=(char*)malloc(n);
	if(name==0)
	{
		printf("EROARE LA ALOCAREA NUMELUI");
		exit(EXIT_FAILURE);
	}
	return name;
}*/