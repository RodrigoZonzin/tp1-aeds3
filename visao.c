#include <stdio.h>
#include <stdlib.h> 
#include "ponto.h"
#include "analise.h"

int main(){
    int N, Xa, Xb;
    int x, y;  


    printf("controle: Digite N, Xa e Xb\n"); 
    scanf("%d %d %d", &N, &Xa, &Xb); 

    Ponto **pts = cria_vetor_de_pontos(N); 

    for(int i = 0; i<N; i++){
        scanf("%d %d", &x, &y); 
        pts[i] = cria_ponto(x,y); 
    }
    int resultado = proposicao2(pts, N); 
    printf("resultado da prop2 foi %d\n", resultado); 
    imprime_vetor_de_pontos(pts, N);

    return 0; 
}