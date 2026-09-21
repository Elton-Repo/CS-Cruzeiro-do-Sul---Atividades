#include <stdio.h>

int main()
{
    float freq, nota;
    
    printf("Coloque sua nota\n");
    scanf("%f", &nota);
    printf("Coloque sua frequencia\n");
    scanf("%f", &freq);
    
    if (freq >= 75){
        if(nota >= 6){
            printf("Aprovado\n");
        }
        else{
            printf("Reprovado por nota\n");
        }
        
    }
    else{
        printf("Reprovado por falta\n");
        
    }
    
    

    return 0;
}