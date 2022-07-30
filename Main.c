#include <stdio.h>
#include <stdlib.h>
#include "Racional.h"

int main(){
    Racional *r1, *r2;
    int a, b, x, y;
    double somatoria, multiplicacao;

    printf("Informe o numerador da primeira fracao: ");
    scanf("%d", &a);
    printf("Agora, o denominador: ");
    scanf("%d", &b);
    r1 = criaR(a, &b);

    printf("Informe o numerador da segunda fracao: ");
    scanf("%d", &x);
    printf("Agora, o denominador: ");
    scanf("%d", &y);
    r2 = criaR(x, &y);

    //TESTE IMPRESSAO
    printf("\n");
    imprimiR(r1);
    printf("\n");
    imprimiR(r2);

    //TESTE SOMATORIA
    printf("\n\n");
    somatoria = somaR(r1, r2);
    printf("%.2f", somatoria);
    printf("\n");

    //TESTE MULTIPLICACAO
    printf("\n");
    multiplicacao = multiplicaR(r1, r2);
    printf("%.2f", multiplicacao);
    printf("\n");

    //TESTE IGUALDADE
    printf("\n");
    checarIgualdade(r1, r2);
    printf("\n\n");

    system("PAUSE");
    return 0;
}
