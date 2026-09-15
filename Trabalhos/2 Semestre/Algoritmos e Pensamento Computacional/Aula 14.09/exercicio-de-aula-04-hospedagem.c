
#include <stdio.h>
#include <math.h>

int main()
{
    char tiposHospedagem;
    int quantidadeDiarias;
    float valorDiaria, valorTotal;
    
    printf("Qual o tipo de hospedagem (S - D - T)\n");
    scanf("%c", &tiposHospedagem);
    printf("Qual a quantidade de diarias\n");
    scanf("%d", &quantidadeDiarias);
    
    switch(tiposHospedagem){
        case 'S' :
        case 's' :
            valorDiaria = 300.0f;
            break;
        case 'D' :
        case 'd' :
            valorDiaria = 450.0f;
            break;
        case 'T' : 
        case 't' :
            valorDiaria = 500.0f;
            break;
            
        default:
            printf("\n Tipo Invalido\n");
    }
    
    valorTotal = valorDiaria*quantidadeDiarias;
    printf("O Custo total da hospedagem será %.2f", valorTotal);
    
    

    return 0;
}