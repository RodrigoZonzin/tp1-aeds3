#include <stdio.h>
#include <stdlib.h> 
#include "ponto.h"
#include "analise.h"


//VISAO É UM TERMO EMPRESTADO DO PADRÃO DE SOFTWARE MVC
//ELE FARÁ A INTERAÇÃO DAS ENTRADAS E SAÍDAS E COM O 'NÚCLEO'
//DO PROGRAMA 

int main(){
    int N, Xa, Xb;
    int x, y;  

    //RECEBE A TERNA DE VALORES QUE REPRESENTAM
    //O TANTO DE PONTOS E O INTERVALO DA ANÁLISE
    printf("controle: Digite N, Xa e Xb\n"); //COMENTAR NA VERSAO FINAL
    scanf("%d %d %d", &N, &Xa, &Xb); 


    //CRIA UM VETOR DE PONTOS E REQUERE DO USUÁRIO OS VALORES
    //DE CADA PAR (x,y) QUE O PROGRAMA IRÁ ANALISAR, ALOCANDO-OS TAMBÉM
    Ponto **pts = cria_vetor_de_pontos(N); 

    for(int i = 0; i<N; i++){
        scanf("%d %d", &x, &y); 
        pts[i] = cria_ponto(x,y); 
        
    }

    for(int i =0; i<N-1; i++){
        printf("slope is %lf\n", coeficiente_angular(pts[i], pts[i+1]));
    }

    //CHAMADA DA FUNÇÃO QUE IRÁ ANALISAR OS RESULTADOS OBTIDOS
    //PARA O CONJUNTO DE DADOS 
    int resultado = proposicao1(pts, N); 
    printf("resultado da prop1 foi %d\n", resultado); 
    
    imprime_vetor_de_pontos(pts, N); //COMENTAR NA VERSAO FIANL
    destroi_vetor_de_pontos(pts, N);
    



    return 0; 
}
