#include <stdio.h>

//Torre (Nivel mestre)

    void movertorre(int casas){
        if (casas>0){  
            printf("\nDireita");
            movertorre(casas-1);}
    }


    //Aqui o bispo vai seguir a quantidade de movimentos inseridas la em baixo na função moverbispo()   
    void moverbispo(int casas){ 
        for (int i=0; i < casas ; i++){ //nesse for ele vai passar 5x conforme colocado abaixo
            for(int j=1 ; j < 2 ; j++) { // nesse for ele vai dar sempre 1 para voltar o ciclo das 5x acima
                printf("\nDireita");} // cada vez que imprime 
            printf("\nCima\n");
            }
        }

    //Movimento da rainha, seguindo a logica da torre

    void moverrainha(int casa_rainha){
        if (casa_rainha > 0){
        printf("\nEsquerda");
        moverrainha(casa_rainha-1);}
    }
    // Cavalo: logica parecida com a do bispo:

    void movercavalo (int casa_cavalo){
        for (int i=0; i<casa_cavalo ; i++){
            for (int j =1; j<3 ; j++) {
                printf("\nCima");}
            printf("\nDireita");}
    }

// As funções separadinhas:

int main() {
    printf("\nMovimento da torre.\n");
    movertorre(5); // chama função da torre
    printf("\n");
    
    printf("\nMovimento do Bispo.\n");  
    moverbispo(5); // chama função do bispo

    printf("\nMovimento da rainha.\n");
    moverrainha(8);
    printf("\n");

    printf("\nMovimento do Cavalo.\n");
    movercavalo(1);
    return 0;

}


