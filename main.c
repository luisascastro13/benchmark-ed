#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "abp.h"
#include<time.h>

#define CINCO 5000
#define DEZ 10000
#define CEM 100000
#define MILHAO 1000000

int main()
{
    //arv1 eh ordenada, arv2 eh aleatoria.
    pNodoA *arv1 = NULL, *arv2 = NULL;
    int numero;

    srand(time(NULL));
    
    //##################################
    //########## ARV ORD 5 #############
    //##################################
    //preenche arvore ordenada com 5 mil
    for(int i=1; i<=CINCO; i++){
        arv1 = InsereArvore(arv1, i);
    }    

    //pesquisa primeiro (elemento de numero 1)
    //pesquisa ultimo (se os dois ponteiros apontam pra null)
    //pesquisa meio (elemento de numero quant/2)

    //##################################
    //########## ARV ALEAT 5 ###########
    //##################################
    for(int i=1; i<=CINCO; i++){
        //gera CINCO valores aleatorios entre 0 e CINCO
        numero = rand() % CINCO;

        arv2 = InsereArvore(arv2, numero);      
    }
    
    //consulta 10 valores aleatorios
    //calcular a media de tempo de cada consulta
    //calcular a media de tempo das 10 consultas

    //deleta arv1
    //deleta arv2

    //##################################
    //########## ARV ORD 10 ############
    //##################################
    //preenche arvore ordenada com 10 mil
    for(int i=1; i<=DEZ; i++){
        arv1 = InsereArvore(arv1, i);
    }    

    //pesquisa primeiro (elemento de numero 1)
    //pesquisa ultimo (se os dois ponteiros apontam pra null)
    //pesquisa meio (elemento de numero quant/2)

    //##################################
    //########## ARV ALEAT 10 ##########
    //##################################
    for(int i=1; i<=DEZ; i++){
        //gera DEZ valores aleatorios entre 0 e DEZ
        numero = rand() % DEZ;

        arv2 = InsereArvore(arv2, numero);      
    }
    
    //consulta 10 valores aleatorios
    //calcular a media de tempo de cada consulta
    //calcular a media de tempo das 10 consultas

    //deleta arv1
    //deleta arv2

    //##################################
    //########## ARV ORD 100 ###########
    //##################################
    //preenche arvore ordenada com 100 mil
    for(int i=1; i<=CEM; i++){
        arv1 = InsereArvore(arv1, i);
    }    

    //pesquisa primeiro (elemento de numero 1)
    //pesquisa ultimo (se os dois ponteiros apontam pra null)
    //pesquisa meio (elemento de numero quant/2)


    //##################################
    //########## ARV ALEAT 100 #########
    //##################################
    for(int i=1; i<=CEM; i++){
        //gera CEM valores aleatorios entre 0 e CEM
        numero = rand() % CEM;

        arv2 = InsereArvore(arv2, numero);      
    }
    
    //consulta 10 valores aleatorios
    //calcular a media de tempo de cada consulta
    //calcular a media de tempo das 10 consultas

    //deleta arv1
    //deleta arv2

    //##################################
    //########## ARV ORD 1 #############
    //##################################
    //preenche arvore ordenada com 1 milhao
    for(int i=1; i<=MILHAO; i++){
        arv1 = InsereArvore(arv1, i);
    }    

   //pesquisa primeiro (elemento de numero 1)
    //pesquisa ultimo (se os dois ponteiros apontam pra null)
    //pesquisa meio (elemento de numero quant/2)


    //##################################
    //########## ARV ALEAT 1 ###########
    //##################################    
    for(int i=1; i<=MILHAO; i++){
        //gera MILHAO valores aleatorios entre 0 e MILHAO
        numero = rand() % MILHAO;

        arv2 = InsereArvore(arv2, numero);      
    }
    
    //consulta 10 valores aleatorios
    //calcular a media de tempo de cada consulta
    //calcular a media de tempo das 10 consultas

    //deleta arv1
    //deleta arv2
    
}
