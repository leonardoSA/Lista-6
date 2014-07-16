#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *fh;
	char nome[100];
	int tel;
	
	
	fh=fopen("arquivoq8.txt","w");
		
	scanf("%s",nome);
	scanf("%d",&tel);
		
	while(1){
		if(tel==0){
			break;}
	 	fprintf(fh,"%s %d\n",nome,tel);	
		scanf("%s",nome);
		scanf("%d",&tel);}
		
	fclose(fh);	
		
	return (0);

}



