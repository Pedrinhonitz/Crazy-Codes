#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int *vet, int n) {
    for(int i=n-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(vet[j] > vet[j+1]) {
                swap(&vet[j], &vet[j+1]);
            }
        }
    }

}

int main() {
    int n, *vet;

    printf("Digite o tamanho do VETOR: \n");
    scanf("%d", &n);

    vet = malloc(n * sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Digite o Numero para o posição %d: \n", i);
        scanf("%d", &vet[i]);
    }    

    printf("Antes da Ordenação\n");

    for(int j=0; j<n; j++) {
        printf("%d\n", vet[j]);
    }

    printf("Depois da Ordenação\n");
    bubbleSort(vet, n);

    for(int k=0; k<n; k++) {
        printf("%d\n", vet[k]);
    }
}