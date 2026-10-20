#include <stdio.h>

int main()
{
    int quantidade, i; 
    FILE *arquivo;
    char dia[10];
    float consumo; 

    arquivo = fopen("consumo.txt", "a");
    
    if (arquivo == NULL){
        printf("Falha ao criar/editar o arquivo\n");
        return 1;
    }
    
    printf("Quantos registros deseja cadastrar? ");
    scanf("%d", &quantidade);
    
    for (i=0; i <quantidade;i++){
        printf("\nRegistro %d\n", i+1);
    
    
    printf("Dia: ");
    scanf("%9s", dia);
    
    printf("consumo: ");
    scanf("%f", &consumo);
    
    fprintf(arquivo, "%s  %.2f\n", dia, consumo);
    
    }
    
    fclose(arquivo);
    printf("Consumo gravado com sucesso");

    return 0;
}