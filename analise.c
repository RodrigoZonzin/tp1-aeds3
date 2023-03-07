#include "ponto.h"
#include "analise.h"


//PROPOSICAO 1
//DADOS DOIS PONTOS (x1, y1) E (x2,y2),
//SE x2<x1 E y2>y1 ENTÃO NÃO HÁ INTERSECÇÃO ENTRE AS RETAS 
int proposicao1(Ponto **pts, int N){
   int contador; 


    return 1;
}


//PROPOSICAO 2 
//DADO DOIS PONTOS (x1, y1) E (x2,y2) EM R2 
//SE y2<y1 ENTÃO HÁ INTERSECÇÃO 
int proposicao2(Ponto **pts, int N){
    int contador; 

    for(int i=0; i<=N;i++){
        if(pts[i]->y < pts[i+1]->y){
            contador++; 
        }
    }

    return contador; 
}