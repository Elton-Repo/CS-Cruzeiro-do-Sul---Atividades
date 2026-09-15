#include <stdio.h>
#define PI 3.1415


int main(){
    float medida;
    float perimetro;
    
    printf("Qual a medida do raio(em cm): ");
    scanf("%f", &medida);
    
    perimetro = 2* PI * medida;
    
    printf("A medida da circunferencia é de %.2f. ", perimetro);
    
    
    return 0;
}