#include <stdio.h>

int main(){

    int v1,v2,v3,v4,v5,v6;

    v6 = -200;
    v5 = 10;

    //pra quem = o que
    v1 = v5 + v6;
    v2 = v5 - v6;
    v3 = v5 * v6;
    v4 = v6 / v5;

    //texto" onde
    printf("> Valor v6 = %i\n", v6);
    printf("> Valor v5 = %i\n", v5);
    printf("> Soma: %i + %i = %i\n", v5, v6, v1);
    printf("> Subtracao: %i - %i = %i\n", v5, v6, v2);
    printf("> Multiplicacao: %i * %i = %i\n", v5, v6, v3);
    printf("> Divisao: %i / %i = %i\n", v6, v5, v4);  

    return 0;
}