#include <stdio.h>

int main()
{
     /*
        Mostra a tabuada do número desejado usando um
        laço for
    */
    int num;

    printf("\n\nDigite qual tabuada voce deseja visualizar: ");
    scanf("%d", &num);
    for(int i = 0; i < 10; i++) {
        printf("%d * %d = %d\n", i, num, i * num);
    }

    return 0;
}
