#include <stdio.h>

int main()
{
    /*
        vetor de inteiros tamanho 'tam'
    */
    int tam;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &tam);
    int vet[tam];

    printf("pos-valor\n");
    for(int i = 0; i < tam; i++) {
        vet[i] = i;
        printf("[%d] = %d\n", i, vet[i]);
    }
    
    return 0;
}
