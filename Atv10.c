#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fh,*fh2;
	char entrada[10];
	char saida[10];
	char cidade[40];
	float habi=0;
	float habiMa=0;
	char cidaMa[40];
		
	printf("nome do arquivo de entrada\n");
	scanf("%s",entrada);
	printf("nome do arquivo de saida\n");
	scanf("%s",saida);
	
	fh=fopen(entrada,"r");
	fh2=fopen(saida,"w");
		
	fscanf(fh,"%s %f",cidade,&habi);
		if(habi>habiMa){
			habiMa=habi;
			strcpy(cidaMa,cidade);
			}
			
	while(!feof(fh)){	
		fscanf(fh,"%s %f",cidade,&habi);	
		if(habi>habiMa){
			habiMa=habi;
			strcpy(cidaMa,cidade);
		}
	}
	fprintf(fh2,"%s %.2f HABITANTES",cidaMa,habiMa);
		fclose(fh);
		fclose(fh2);
		
	return (0);

}


