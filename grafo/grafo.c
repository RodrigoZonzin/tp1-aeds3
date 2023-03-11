#include "grafo.h"
#include "ponto.h"


Grafo* faz_grafo(int n){
    Grafo* g = (Grafo*)malloc(sizeof(Grafo));

    g->tamanho = n; 
    g->grafo_vazio = 1; 
    g->matriz_adj = (Ponto**)malloc(sizeof(Ponto)*n);


    for(int i =0; i < n; i++){
        g->matriz_adj[i] = (Ponto*)malloc(sizeof(Ponto)*n);
    }

    for(int i=0; i<n; i++){
        for(int j =0; j<n;j++){
            g->matriz_adj[i][j] = 0;
        }
    }
    return g;
}

void insere_aresta(Grafo *g, Ponto p1, Ponto p2, int peso){
    
    g->matriz[p1->][v2] = peso; 
    if(g->grafo_vazio == 1){
        g->grafo_vazio = 0; 
    }
}