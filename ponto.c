#include "ponto.h"
#include <stdlib.h>
#include <stdio.h>

Ponto* cria_ponto(int x, int y){
    Ponto *p = (Ponto*)malloc(sizeof(Ponto)); 

    //EM CASO DE SEGMENTATION FAULT, 
    //CONSIDERAR ALOCAR OS PONTOS X E Y

    p->x = x; 
    p->y = y;

    return p;  
}

void destroi_ponto(Ponto *p){
    free(p); 
}

Ponto** cria_vetor_de_pontos(int N){
    Ponto **pts = (Ponto**)malloc(sizeof(Ponto*)); 

    return pts; 
}

void imprime_vetor_de_pontos(Ponto **pts, int N){
    for(int i =0; i<N; i++){
        printf("(%d, %d)\n", pts[i]->x, pts[i]->y); 
    }
}