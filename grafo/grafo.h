#ifndef _GRAFO_H
#define _GRAFO_H

#include "ponto.h"

struct grafo{
    int tamanho;
    int grafo_vazio; 
    Ponto **matriz_adj; 
};

typedef struct grafo Grafo; 

Grafo* faz_grafo(int); 
void insere_aresta(Grafo*, int, int, int); 
int existe_aresta(GRafo*, int, int);
void retira_aresta(Grafo*, int, int);
int retira_min(Grafo*); 
int lista_adj_vazia(Grafo*, int);
void libera_grafo(Grafo*);
void imprime_grafo(Grafo*);


#endif 