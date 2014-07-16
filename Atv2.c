#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	FILE *fh;
	char carc;
	int linhas;
	
	
		fh=fopen("arqui.txt","r");
		fscanf(fh," %c",&carc);
		linhas=1;
		while(!feof(fh)){
				
			fscanf(fh," %c",&carc);	
			linhas++;
		}
		fclose(fh);
		printf("O ARQUIVO TEM %d LINHAS",linhas-1);
	
		
	return (0);

}


