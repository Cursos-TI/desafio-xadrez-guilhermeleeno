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
    


    return 0;
}
