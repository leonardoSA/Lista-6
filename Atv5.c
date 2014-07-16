#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fh;
	char carc[10];
	int linhas=0;
	
	
		fh=fopen("arquivoq5.txt","r");
		
		fscanf(fh," %s",carc);
		
		while(!feof(fh)){
				
			fscanf(fh," %s",carc);	
			linhas++;
		}
		fclose(fh);
		printf("O ARQUIVO TEM %d LINHAS",linhas);
	
		
	return (0);

}


