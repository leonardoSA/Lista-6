#include <stdio.h>

char nome;
int prin(int *mat,int *ano)
{
	int i,n;
	FILE *escrita;
	if((escrita = fopen("arq.txt","w")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
    }
	printf("digite o numero de alunos a ser armazenado\n");
    scanf("%d",& n);
    for(i=0;i<n;i++)
    {
    	printf("digite a informacao do aluno %d \n",i+1);
    	printf("digite o sobrenome do aluno\n");
    	scanf("%c ",&nome);
    	do
    	{
    		nome = getchar();
    		if(nome != '\n'){putc(nome,escrita);}
    	}while(nome != '\n');
    	
    	printf("digite o numero de matricula\n");
    	scanf("%d",& mat); 
		printf("digite o ano de nascimento\n");
    	scanf("%d",& ano); 
    	fprintf(escrita," %d matricula %d ano\n",mat,ano);
    }
}

int main()
{
		int mat, ano;
		char nome;
		prin(&mat,&ano);
}
