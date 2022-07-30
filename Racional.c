#include <stdlib.h>
#include <math.h>
#include "Racional.h"

struct racional{
    int numerador;
    int denominador;
    double fracao;
};

//Retorna uma variavel Racional
Racional *criaR(int a, int *b){
    Racional *r = (Racional*)malloc(sizeof(Racional));
    if(r != NULL){
        while(*b == 0){
            printf("ERRO: O denominador deve ser diferente de zero. Insira um valor valido: ");
            scanf("%d", &*b);
        }
        (*r).numerador = a;
        (*r).denominador = *b;
        (*r).fracao = (double)a/(*b);
    }
    return r;
}

//Imprime um racional
void imprimiR(Racional *r){
    printf("%.2f", (*r).fracao);
}

//Retorna a somatoria entre dois racionais
double somaR(Racional *r1, Racional *r2){
    double somatoria = (*r1).fracao + (*r2).fracao;
    return somatoria;
}

//Retorna a multiplicacao entre dois racionais
double multiplicaR(Racional *r1, Racional *r2){
    double multiplicacao = (*r1).fracao * (*r2).fracao;
    return multiplicacao;
}

//Testa se ha igualdade entre dois racionais
void checarIgualdade(Racional *r1, Racional *r2){
    if((*r1).fracao == (*r2).fracao){
        printf("Os racionais informados sao iguais um ao outro.");
    }else{
        printf("Os racionais informados sao diferentes um do outro.");
    }
}
