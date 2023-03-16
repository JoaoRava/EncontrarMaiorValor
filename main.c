/******************************************************************************
MANIPULANDO VETOR
ENCONTRAR O MAIOR VALOR DENTRO DE UM VETOR
*******************************************************************************/

#include <stdio.h>

int main()
{
    #define TAM_MAX 10
    float vet1[TAM_MAX];
    float maior;
    int i;
    for(i=0; i<TAM_MAX; i++)
        scanf("%f", &vet1[i]);// le os dados
    
    maior = vet1[0]; // assumo que o primeiro é o maior
    for(i=0; i<TAM_MAX; i++)
        if (vet1[i] > maior)
            maior = vet1[i];
            
    printf("O maior elemento é %f\n", maior);
    
    

    return 0;
}
