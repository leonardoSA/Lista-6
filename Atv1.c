#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	FILE *fh;
	char carc;
	int op;
	
	
	printf("DIGITE 1 PARA CRIAR UM ARQUIVO TEXTO\nDIGITE 2 PARA ABRIR UM ARQUIVO TEXTO\n");
	scanf("%d",&op);
	
	if(op==1){
		
		fh=fopen("arqui.txt","w");

		while(1){
		
			printf("DIGITE UM CARACTERE\n");
			scanf(" %c",&carc);
			if(carc=='0'){
				break;
			}
			fprintf(fh,"%c",carc);		
			fclose(fh);
		}
	}
	
	if(op==2){

		fh=fopen("arqui.txt","r");
		fscanf(fh," %c",&carc);
		
		while(!feof(fh)){
		
			printf("%c\n",carc);		
			fscanf(fh," %c",&carc);	
		}
		fclose(fh);
	}

	return (0);

}


