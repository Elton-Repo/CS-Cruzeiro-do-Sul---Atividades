#include <stdio.h>
#include <math.h>

int main()
{
    float largura, comprimento, area, quadro, caixa, custo ;
    
    printf("===Calculo de area====\n");
    printf("Digite a largura\n");
    scanf("%f", &largura);
    printf("Digite o comprimento\n");
    scanf("%f", &comprimento);
    printf("Digite o valor da caixa\n");
    scanf("%f", &caixa);
    
        
    
    area = largura * comprimento;
    
    quadro = ceil(sqrt(area)/2.5);
    
    custo = quadro * caixa;
    
    printf("A area a ser reverstida será %.02f \n", area);
    printf("A quantidade de caixa necessaria será %f \n", quadro);
    printf("O Custo será %.02f \n", custo);
    
    return  0;

}