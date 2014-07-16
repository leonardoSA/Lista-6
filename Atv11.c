#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Verificaid(float ano,float *idade){

*idade=2014-ano;	

}

int main()
{
	FILE *fh,*fh2;
	char entrada[10];
	char saida[10];
	char nome[40];
	float ano;
	float idade;
		
	printf("nome do arquivo de entrada\n");
	scanf("%s",entrada);
	printf("nome do arquivo de saida\n");
	scanf("%s",saida);
	
	fh=fopen(entrada,"r");
	fh2=fopen(saida,"w");
	
	
	while(!feof(fh)){
	
	fscanf(fh,"%s %f",nome,&ano);
	Verificaid(ano,&idade);		
	if(idade<18)
		fprintf(fh2,"%s menor de idade.\n",nome);	
	if(idade>18)
		fprintf(fh2,"%s menor de idade.\n",nome);	
	if(idade==18)
		fprintf(fh2,"%s entrado na idade.\n",nome);	
	}
	
	fclose(fh);
	fclose(fh2);
		
	return (0);

}

