#include <stdio.h>

int principal(char nome)
{
	FILE *escrita;
	FILE *leitura;
	if((escrita = fopen("arq.txt","w")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
    }
    printf("digite algo para por no arquivo \n");
    do
    {
        nome = getchar();
        putc(nome,escrita);
        
    }while(nome != '0');
	
	rewind(escrita);
	
	fclose(escrita);

	if((leitura = fopen("arq.txt","r")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
    }	
    else
	{
    	do
		{
    	fscanf(leitura,"%c",&nome);
    	printf("%c", nome);
    	}while(nome != '0');
    	
    	fclose(leitura);	
    }
    
}
int main()
  {
    char nome;
    
	principal(nome);
	
    return(0);
  }
