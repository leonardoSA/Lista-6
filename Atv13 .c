#include <stdio.h>
#include <string.h>

int principal(char nome)
{
	int n,i,cn;
	float nota;
	FILE *escrita;
	FILE *escrita1;
	FILE *leitura;
	FILE *leitura1;
		
	char v[50][45];
	
	printf("digite o numero de alunos da disciplina\n");
	scanf("%d",& n);
	
	if((escrita = fopen("nome.txt","w")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
    }
    if((escrita1 = fopen("notas.txt","w")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
    }
	
	for(i=1;i<=n;i++)
	{
    scanf("%c",& nome);
	printf("digite o nome do aluno\n");
	cn=1;
	nome='a';
    do
    {
        if(nome!='\n')
		{
		nome = getchar();
		if(nome!='\n'){putc(nome,escrita);}
		}
        else{fprintf(escrita," "); }
        cn++;
    }while(cn <= 36); 
    fprintf(escrita,"\n");
    printf("digite a nota\n");
	scanf("%f",& nota);
	fprintf(escrita1,"%.2f\n",nota);
	}
	
	rewind(escrita);
	
	fclose(escrita);

	rewind(escrita1);
	
	fclose(escrita1);

	if((leitura = fopen("notas.txt","r")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
    }
	if((leitura1 = fopen("nome.txt","r")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
    }	
    else
	{	
		for(cn=0;cn<45;cn++)
		{
			for(i=0;i<n;i++)
			{
    		do
			{   	
    		if(cn>39 and cn<45){nome = getc(leitura);}
    		else{nome = getc(leitura1); 	}
    		v[i][cn]=nome;
    		printf("%c",v[i][cn]);
    		}while(nome != EOF);
    		}
    	}
    }
    fclose(leitura);
	fclose(leitura1);
}
int main()
  {
    char nome;
    
	principal(nome);
	
    return(0);
  }
