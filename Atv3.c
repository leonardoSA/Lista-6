#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	FILE *fh;
	FILE *fh2;
	FILE *fh3;
	
	char carc;
	char arq1[100];
	char arq2[100];
	
	
	fh=fopen("arqui.txt","r");
	fh3=fopen("arqui3.txt","w");
	
	while(!feof(fh)){
			
		fscanf(fh," %c",&carc);	
		fprintf(fh3," %c",carc);
	}
	fclose(fh);

	fh2=fopen("arqui2.txt","r");
	
	while(!feof(fh2)){
			
		fscanf(fh," %c",&carc);	
		fprintf(fh3," %c",carc);
	}
	fclose(fh2);
	fclose(fh3);
	
		
	return (0);

}


