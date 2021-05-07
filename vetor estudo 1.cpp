#include <stdio.h>

int main()
{
    int num;
    int vet[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    printf("Digite um numero de 0 a 9:");
    scanf("%d", &num);
    printf("O elemento encontrado no vetor foi %d", vet[num]);
    return 0;
}
