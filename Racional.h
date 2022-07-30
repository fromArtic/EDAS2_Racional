//Struct Racional
typedef struct racional Racional;

//Retorna um racional (contem o numerador, denominador e a respectiva fracao)
Racional *criaR(int numerador, int *denominador);

//Imprime um racional
void imprimiR(Racional *r);

//Retorna a somatoria entre dois racionais
double somaR(Racional *r1, Racional *r2);

//Retorna a multiplicacao entre dois racionais
double multiplicaR(Racional *r1, Racional *r2);

//Testa se ha igualdade entre dois racionais
void checarIgualdade(Racional *r1, Racional *r2);
