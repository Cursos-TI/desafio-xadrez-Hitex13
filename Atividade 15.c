#include <stdio.h>

void torre(){
for (int T = 1; T <= 5; T++)
{
    printf("Torre moveu para direita(%d)\n",T);
}

}

void bispo(){
for (int l = 0; l < 5; l++)
{
    int k;
    for (int k = 1; k <= 5; k++)
    {
       printf("Bispo moveu para diagonal direita (%d)\n", k);
    }
    if (k = 5)break;
    
    
}
}
void cavalo(){

for (int i  = 0, j = 0, C = 1; i <= 2; i++ , j++ ,C++)
{

    if (i < 2){
    printf("cavalo moveu para cima(%d)\n" , i);}
    if (j == 2)
    printf("cavalo moveu para direita(1)\n");

}
}
void Rainha(){

for (int R = 1; R <= 8; R++)
{
    printf("Rainha Moveu uma casa para esquerda(%d)\n",   R);
}



}

int main(){

int escolha;
printf("Inciando...\nQual peça gostaria de mover\n");
printf("1.Torre\n2.Bispo\n3.Rainha\n4.Cavalo\n");
scanf("%d" , &escolha);

switch (escolha)
{
case 1:
    torre();
    break;
case 2:
    bispo();
    break;
case 3:
    Rainha();
    break;
case 4:
    cavalo();
    break;
default:
printf("Opçao Errada");
    break;
}


return 0;

}