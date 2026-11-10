

#include <stdio.h>

void exibirVetor(float vetor[], int tamanho){
int i;

    for (i = 0; i < tamanho; i++) {
    printf("%.2f ", vetor[i]);
    }
        printf("\n");
    }

void bubbleSort(float vetor[], int tamanho)
{
    int i, j;
    float  auxiliar;
    
    for ( i=0; i<tamanho-1; i++ ){
        for(j=0; j <(tamanho-1-i); j++){
            if(vetor[j]>vetor[j+1]){
                auxiliar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = auxiliar;
                
                
            }
        }
    }
    
}

void bubbleSortDec( float vetor[], int tamanho)
{
    int i, j;
    float  auxiliar;
    
    for ( i=0; i<tamanho-1; i++ ){
        for(j=0; j <(tamanho-1-i); j++){
            if(vetor[j]<vetor[j+1]){
                auxiliar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = auxiliar;
                
                
            }
        }
    }
    
}

/*------------------------------------------------------------*/

int main(void){
    
    float senhas [5] = {6.5, 9.0, 7.5, 5.0, 8.0};
    int tamanho      = 5;
    
    printf("Notas antes: \n");
    exibirVetor(senhas, tamanho);
    
    printf("Notas depois da ordenação: \n");
    bubbleSort(senhas, tamanho);
    exibirVetor(senhas, tamanho);
    
    printf("Notas invertida: \n");
    bubbleSortDec(senhas, tamanho);
    exibirVetor(senhas, tamanho);
    
}