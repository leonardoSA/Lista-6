#include <stdio.h>

int principal(char nome)
{
	float p,total;
	FILE *escrita;
	if((escrita = fopen("arq.txt","w")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
    }
    printf("digite um preço negativo para encerrar\n");
    
	total=0;
    p=0;
	do{
    	printf("digite o preço do produto\n");
    	scanf("%f",&p);
    	fprintf(escrita,"%.2f\n",p);
    	
    	if(p>=0){total=total+p; }
    	
    }while(p>=0);
    
    fprintf(escrita,"o total dos produtos foi: %.2f",total);
    printf("o total dos produtos foi: %.2f",total);
		
	fclose(escrita);
    
}
int main()
  {
    char nome;
    
	principal(nome);
	
    return(0);
  }
