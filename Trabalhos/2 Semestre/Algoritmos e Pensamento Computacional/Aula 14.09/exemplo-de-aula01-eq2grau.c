
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, x1, x2;
    
    
    printf("Digite o valor de A \n");
    scanf("%f", &a);
    printf("Digite o valor de B \n");
    scanf("%f", &b);
    printf("Digite o valor de C \n");
    scanf("%f", &c);
    
    delta = (b*b) -4 * a * c;
    x1 = (-b + sqrtf(delta))/2*a;
    x2 = (-b - sqrtf(delta))/2*a;
    
    printf("\n O valor da primeira raiz é: %.2f \n",x1);
    printf("\n O valor da segunda raiz é: %.2f \n",x2);
    
    
    
    
    
    
    return 0;
}