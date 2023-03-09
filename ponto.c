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

//CADA PONTO ALOCADO DEVERÁ SER LIBERADO 
//ANTES DE SE LIBERAR O VETOR DE PONTOS
void destroi_ponto(Ponto *p){
    free(p); 
}

//ALOCA UM ESPAÇO NA MEMÓRIA PARA OS N-PONTOS
//NECESSÁRIOS
Ponto** cria_vetor_de_pontos(int N){
    Ponto **pts = (Ponto**)malloc(sizeof(Ponto*)); 

    return pts; 
}

//IMPRIME OS N PONTOS CONTIDOS NO "ARRAY" DE 
//PONTOS
void imprime_vetor_de_pontos(Ponto **pts, int N){
    for(int i =0; i<N; i++){
        printf("(%d, %d)\n", pts[i]->x, pts[i]->y); 
    }
}

//UM LAÇO QUE PERCORRE OS N ELEMENTOS DE UM ARRAY-PONTOS
//LIBERANDO CADA ELEMENTO PERTENCENTE A ELE
//POR FIM, LIBERA O ESPAÇO DO PRÓPRIO PONTEIRO
void destroi_vetor_de_pontos(Ponto** pts, int N){
    for(int i = 1; i<N; i++){
        destroi_ponto(pts[i]);
        printf("pts[%d] == freed\n", i); 
    }
    free(pts);
}