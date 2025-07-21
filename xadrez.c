#include <stdio.h>


//Primeira peça: Torre - For
int main() {
    printf("Movimento da torre:\n");
    
    for (int torre = 0; torre <5 ; torre++)
    {
        printf("Direita\n");
    }
    
    //Segunda peça: Bispo - Do while
    printf("\nMovimento do bispo:\n");
    int bispo = 0;

    do
    {
        printf("Direita, Cima\n");
        bispo++;   
    } while (bispo < 5);
    
    //Movimento da rainha
    printf("\nMovimento da rainha:\n");

    int rainha =0;
    while (rainha < 8)
    {
        printf("Esquerda\n");
        rainha++;
    }
    //Segunda parte do desafio - Aventureiro

    printf("\nMovimento do cavalo - 1 (for)\n");

    //Utilizando o loop for, sinalizei para saber qual etapa do loop a palavra baixo foi impressa.
    
    for (int cavalo1 = 0; cavalo1 <1 ; cavalo1++)
    {
        for (int cavalo2 = 0; cavalo2 <1 ; cavalo2++)
            printf("Baixo-\n");
    {
        printf("Baixo*\n"); //sinalizei para ver o loop *
    }
    
        printf("Esquerda\n");
    }
    
    printf("\nMovimento do cavalo 2 - (while)");
    
        int cavalo1 =0, cavalo2 =0;

    //Loop while tambem sinalizado para observar a palavra 'baixo' impressa.
    
    while (cavalo1 < 1){
        while(cavalo2 < 1){
            
            printf("\nBaixo-");
            cavalo2 ++;
        }
        
        printf("\nBaixo*");
        cavalo1++;
    }
    printf("\nEsquerda");
    return 0;
}


