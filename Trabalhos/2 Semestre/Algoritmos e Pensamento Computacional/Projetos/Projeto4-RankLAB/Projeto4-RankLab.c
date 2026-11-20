#include <stdio.h>
#include <stdbool.h>

void exibirCabecalho() 
{

    printf("========== RANKLAB ==========\n");
    printf("Central de Ordenacao Inteligente\n\n");

    printf("Programa feito por:\n");
    printf("Elton Santos Soares          RGM: 47411341\n");
    printf("Jennifer Silva de Almeida    RGM: 38049589\n\n");

}

void criarSequencia(int numeros[], int tamanho) 
{
    for (int i = 0; i < tamanho; i++) 
    {
        do{
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
        
        if(numeros[i] < 0 || numeros[i] > 100){
            printf("\nErro! Numero invalido! \n\n");
        }
        
        }while (numeros[i] < 0 || numeros[i] > 100);
}
}

int bubbleSort(int sequencia[], int tamanho)
{  
    int comp = 0;
    
    for(int i =0; i < tamanho; i++)
    {
        for(int j =0; j < tamanho - 1 - i; j++)
        {
            comp++;
            if(sequencia[j] > sequencia[j + 1])
            {
                int temp = sequencia[j];
                sequencia[j] = sequencia[j + 1];
                sequencia[j + 1] = temp;
                
            }
        }
    }
    return comp;
}

int selectionSort(int sequencia[], int tamanho) {

    int comp = 0;

    for (int i = 0; i < tamanho - 1; i++) {

        int indiceMenor = i;

        for (int j = i + 1; j < tamanho; j++) {

            comp++;

            if (sequencia[j] < sequencia[indiceMenor]) {
                indiceMenor = j;
            }
        }

        if (indiceMenor != i) {

            int temp = sequencia[i];
            sequencia[i] = sequencia[indiceMenor];
            sequencia[indiceMenor] = temp;

        }
    }

    return comp;
}

int insertionSort(int sequencia[], int tamanho)
{
    int comp = 0;

    for (int i = 1; i < tamanho; i++) {
        int valorAtual = sequencia[i];
        int j = i - 1;

        while (j >= 0) 
        {
            comp++;

            if (sequencia[j] > valorAtual) {
                sequencia[j + 1] = sequencia[j];
                j--;
            }
            else {
                break;
            }
        }

        sequencia[j + 1] = valorAtual;
    }

    return comp;
}

void mostrar(int sequencia[], int tamanho)
{  
    for(int i =0; i < tamanho; i++)
    {
        printf("%d ", sequencia[i]);
    }
    printf("\n" );
}

void copiarVetor(int origem[], int destino[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
}

bool vetoresIguais(int vetor1[], int vetor2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor1[i] != vetor2[i]) {
            return false;
        }
    }

    return true;
}

int main()
{
    int sequencia[10];
    int tamanho = sizeof(sequencia)/sizeof(sequencia[0]);
    
    
    exibirCabecalho();
    criarSequencia(sequencia, tamanho);
    
    int sequenciaBubble[tamanho]; 
    int sequenciaSelection[tamanho]; 
    int sequenciaInsertion[tamanho];
    
    copiarVetor(sequencia, sequenciaBubble, tamanho);
    copiarVetor(sequencia, sequenciaSelection, tamanho);
    copiarVetor(sequencia, sequenciaInsertion, tamanho);
    
 /*=======================================================*/ 
    printf("=================================\n");
    printf("Sequencia Original: \n");
    mostrar(sequencia, tamanho);
    printf("=================================\n");
    
    printf("Bubble Sort: \n");
    int comparacoesBubble = bubbleSort(sequenciaBubble, tamanho);
    mostrar(sequenciaBubble, tamanho);
    printf("Quantidade de comparações: %d\n", comparacoesBubble);
    printf("=================================\n");
    
    printf("Selection Sort\n");
    int comparacoesSelection = selectionSort(sequenciaSelection, tamanho);
    mostrar(sequenciaSelection, tamanho);
    printf("Quantidade de comparações: %d\n", comparacoesSelection);
    printf("=================================\n");

    printf("Insertion Sort\n");
    int comparacoesInsertion = insertionSort(sequenciaInsertion, tamanho);
    mostrar(sequenciaInsertion, tamanho);
    printf("Quantidade de comparações: %d\n", comparacoesInsertion);
    printf("=================================\n");
    
    if(vetoresIguais(sequenciaBubble, sequenciaSelection, tamanho))
    {
        
        
        
        if(vetoresIguais(sequenciaBubble, sequenciaInsertion, tamanho)){
            
            float soma = 0;
            for (int i = 0; i < tamanho; i++) {
                soma += sequenciaBubble[i];
            }
            
            printf("Algoritmos realizados com resultados equivalentes!!!\n");
            printf("Maior pontuação   = %d\n", sequenciaBubble[tamanho-1]);
            printf("Menor pontuação   = %d\n", sequenciaBubble[0]);
            printf("Pontuação Media   = %.1f\n", (soma)/tamanho);
            printf("Pontuação Mediana = %.1f\n", (sequenciaBubble[4]+sequenciaBubble[5])/2);
        }    
        else {
            return 1;
        }
    }
    else{
        printf("Erro no Algoritmos.");
    }
    
 /*=======================================================*/   
        
    
    return 0;
}