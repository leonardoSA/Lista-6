#include <stdio.h>
#include <stdlib.h>

void ConverteBinario(int num[],int *cont){
int x,i=0;

x=num[0];

	while(x>=1){
		num[i]=x%2;
		x=x/2;
		*cont=*cont+1;
		i++;}	

}


int main()
{
	FILE *fh;
	int num[100];
	int linhas,i=0,cont;
	
	
	fh=fopen("arquivoq6.txt","w");
		
	scanf("%d",&linhas);
	
	for(i=0;i<linhas;i++){
		scanf("%d",&num[i]);}
	ConverteBinario(num,&cont);		
	
	for(i=cont-1;i>=0;i--){
	
		fprintf(fh,"%d\n",num[i]);}
		
	fclose(fh);	
		
	return (0);

}


