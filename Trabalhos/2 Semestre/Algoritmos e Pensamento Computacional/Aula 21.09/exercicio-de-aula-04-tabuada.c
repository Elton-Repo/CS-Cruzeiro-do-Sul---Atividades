#include <stdio.h>

int main()
{
    int numero, total;
    
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    
    printf("-------tabuada------\n");
    for(int i = 1; i <= 10; i++){
        
        total = i * numero;  
        printf("%d x %d = |%d| \n", i, numero, total);
    }
    
    
    
    
    return 0;
}