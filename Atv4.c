#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	FILE *fh;
	FILE *fh2;
	
	char carc;
	char arq1[100];
	char arq2[100];
	
	
	fh=fopen("arquivoq4.txt","r");
	fh2=fopen("arquivoQ4teste.txt","w");
	
	//while(!feof(fh)){
	fscanf(fh," %c",&carc);
		carc=toupper(carc);	
		fprintf(fh2,"%c",carc);
	while((carc = getc(fh) ) != EOF){
			
		fscanf(fh," %c",&carc);
		carc=toupper(carc);	
		fprintf(fh2,"%c",carc);
	}
	fclose(fh);
	fclose(fh2);
	
	return (0);
	}
		
