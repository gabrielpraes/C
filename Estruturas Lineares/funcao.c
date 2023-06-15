#include <stdio.h>


int soma(int num1, int num2) {
    return num1 + num2;
}

int main()
{
    /*
        Funcao em c
    */
    int soma1, soma2;
    printf("\n\nDigite dois numeros para serem somados: ");
    scanf("%d %d", &soma1, &soma2);
    printf("Soma dos valores: %d", soma(soma1, soma2));

    return 0;
}
