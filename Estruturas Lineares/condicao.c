#include <stdio.h>

int main()
{
    /*
        Verifica se o numero digitado é impar ou par
        de acordo com o resto da divisão por 2
    */
    int num;
    printf("\n\nDigite outro numero inteiro: ");
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("\nO numero %d eh par!", num);
    }
    else {
        printf("\nO numero %d eh impar!", num);
    }

    return 0;
}
