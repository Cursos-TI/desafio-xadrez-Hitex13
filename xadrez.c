#include <stdio.h>

int main (){
int escolha,escolha2,escolha3,escolha4;
printf("\n\n- Xadrez -\n\n");
printf("1.Jogar\n");    
printf("2.Sair\n");
scanf("%d", &escolha);
switch (escolha)
{
case 1:
    printf("Qual peça Gostaria de Mover\n");
    printf("1.Rainha\n");
    printf("2.Bispo\n");
    printf("3.Torre\n");
    scanf("%d" ,&escolha2);
     if (escolha2 == 1)
     {
        printf("1 Diagonal\n");
        printf("2.Lados\n");
        scanf("%d" , &escolha3);            
        if (escolha3 == 1)
        {
            printf("1.Esquerda \n2.Direita\n");
            scanf("%d" ,&escolha4);
            if (escolha4 == 1)
            {
                for (int i = 1; i < 6; i++)
                {
                    printf("Moveu a Rainha Para Diagonal Esquerda (%d)\n", i);
                }
                
            }
            else if (escolha4 == 1)
            {
                for (int i = 1; i < 6; i++)
                {
                    printf("Moveu a Rainha Para Diagonal Direita (%d)\n", i);
                }
            }
            
        }
        else if (escolha3 == 2)
        {
            printf("1.Esquerdo\n2.Direito\n");
            scanf("%d", &escolha4);
            if (escolha4 == 1)
            {
                for (int i = 1; i < 6; i++)
                {
                    printf("Moveu a Rainha Para lado Esquerdo (%d)\n", i);
                }
                
            }
            else if (escolha4 == 2)
            {
                for (int i = 0; i < 5; i++)
                {
                    printf("Moveu a Rainha Para lado direito (%d)\n", i);
                }
                
            }
            else
             {
             printf("Opçao Invalida\n");
             }
        }
        else
        {
            printf("Opçao Invalida\n");
        }
     }
    else if (escolha2 == 2)
    {
        printf("Diagonal\n");
        printf("1.Esquerda\n2.Direita\n");
        scanf("%d" ,&escolha3);
        if (escolha3 == 1)
        {
            int i=1;
            while (i<=6)
            {
                printf("Voce Moveu o Bispo Para Diagonal Esquerda (%d)\n", i);
                i++;
            }
            
        }
        else if (escolha3 == 2)
        {   
            int i=1;
            while (i <= 6)
            {
                 printf("Voce Moveu o Bispo Para Diagonal Direita (%d)\n", i);
                 i++;
            }
        }

        else
        {
            printf("Opçao Invalida\n");
        }
    }
    else if (escolha2 == 3)
    {
        printf("1.Direita\n2.Esquerda\n");
        scanf("%d",&escolha3);
        if (escolha3 == 1)
        {
           int i=1;
            do
            {
                int i=1;
                printf("Voce Moveu a Torre para Direita (%d)\n",i);
            } while (i<=6);
            
           
            
        }
        else if (escolha3 == 2)
        {
            int i=1;
            do
            {
                int i=1;
                printf("Voce Moveu a Torre para Direita (%d)\n",i);
            } while (i <= 6);
        }
        else
        {
            printf("Opçao Invalida");
        }
    }
    else
    {
        printf("Opçao Invalida");
    }

    break;
default:
    break;
    return 0;
}
}