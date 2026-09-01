#include <stdio.h>
#include <math.h>

int main()
{

    float peso,altura,imc;
    
    printf("===LEITOR DE IMC====\n");
    printf("Digite o peso\n");
    scanf("%f", &peso);
    printf("Digite a altura em metro\n");
    scanf("%f", &altura);
    
    imc = peso/ pow(altura, 2);
    
    printf("O Seu imc seria %.02f", imc);
    
    return  0;

}