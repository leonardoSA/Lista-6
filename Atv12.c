#include <stdio.h>

int principal(char nome)
{	
	int ano,i;
	FILE *escrita;
	FILE *leitura;
	if((escrita = fopen("emp.txt","w")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
    }
    for(i=0;i<2;i++)
    {
	printf("digite o cargo \n");
    do
    {
        nome = getchar();
        if(nome!='\n')
		{
		putc(nome,escrita);
    	}
    }while(nome != '\n');
	fprintf(escrita," ");
	printf("digite o tempo de serviço\n");
	scanf(" %d",&ano);
	fprintf(escrita,"%d anos de serviços\n",ano);
	scanf("%c",&nome);
	}
	rewind(escrita);
	
	fclose(escrita);

	if((leitura = fopen("emp.txt","r")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
    }	
    else
	{
    	do
		{
		nome = getc(leitura);
		printf("%c", nome);
    	}while(nome != EOF);
    	
    	fclose(leitura);	
    }
    
}
int main()
  {
    char nome;
    
	principal(nome);
	
    return(0);
  }
