#include <stdio.h>

int main()
{
    int tam1, tam2;
    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &tam1, &tam2);
    int matriz[tam1][tam2];

    int count = 0;
    for (int i = 0; i < tam1; i++) {
        for(int j = 0; j < tam2; j++) {
            matriz[i][j] = count;
            count++;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
