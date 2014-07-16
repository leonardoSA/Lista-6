#include <stdio.h>

void soma()
{
	int a,b;
	printf("\ndigite os numeros para somar");
	scanf("%d %d",&a,&b);
	printf("a soma dos dois numeors: %d\n",a+b);
}

void sub()
{
	int a,b;
	printf("\ndigite os numeros para subtrair");
	scanf("%d %d",&a,&b);
	printf("a subtracao dos dois numeors: %d\n",a-b);
}

int main()
  {
    char aux;
    do
	{
    printf("digite uma opçao (para encerrar digite uma opcao invalida): \n");
    printf("1 - criar soma de n numeros\n");
    printf("2 - criar subtracao de n numeros\n");
    scanf(" %c",& aux);
    switch(aux)
    {
    	case '1': soma();	break;
    	case '2': sub();	break;
    	default : break;
	}
    }while((aux == '1') or (aux == '2'));
	
    return(0);
  }
