#include <stdio.h>

int principal(char nome)
{	int d,m,a,idade;
	int dh,mh,ah;
	FILE *escrita;
	FILE *escrita1;
	if((escrita = fopen("arq.txt","w")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
	}
	if((escrita1 = fopen("arq1.txt","w")) == NULL)
    {
    	printf("Erro ao abrir arquivo!!!\n\n");
        return(1);
	}
	//atualizção do dia
   	printf("digite a data de hoje\n");
   	printf("dia");
   	scanf("%d",&dh);
   	printf("mes");
   	scanf("%d",&mh);
   	printf("ano");
   	scanf("%d",&ah);
    
    do
	{
   	printf("digite a data de nascimento \n");
   	printf("dia");
   	scanf("%d",&d);
   	printf("mes");
   	scanf("%d",&m);
   	printf("ano");
   	scanf("%d",&a);
   	
   	
   		fprintf(escrita,"%d ",d);
   		fprintf(escrita,"%d ",m);
   		fprintf(escrita,"%d ",a);
   		scanf("%c",&nome);//evitar bug
   		printf("digite o nome da pessoa\n");
    	do
    	{
        	nome = getchar();
        	putc(nome,escrita);
        	putc(nome,escrita1);
    	}while(nome != '\n');
    	idade=ah-a;
    	if(ah=a){idade=idade-1;	}
    	if(mh>=m)
		{
			if(mh=m){if(dh<=d){idade=idade+1;}	}
			if(mh>m){idade=idade+1;}
		}
		fprintf(escrita1,"%d anos",idade);
   		printf("deseja cadastrar outra pessoa? s/n");
   		scanf("%c",&nome);
    }while(nome=='s');
    rewind(escrita);
	fclose(escrita);
	
	   
	fclose(escrita1);	
}

int main()
  {
    char nome;
    
	principal(nome);
	
    return(0);
  }
