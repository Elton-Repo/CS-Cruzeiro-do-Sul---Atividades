
#include <stdio.h>
#include <math.h>

int main()
{
    float nota1, nota2, freq, media;
    
    printf("Digite a primeira nota \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota \n");
    scanf("%f", &nota2);
    printf("Qual a frequencia de presença(Em %)?\n");
    scanf("%f", &freq);
    
    media = (nota1 + nota2)/2;
    
    
    
    if (media > 6){ 
        
        if (freq >= 75){
            printf("Você foi APROVADO!!! Sua media é %.1f.", media);
        }
        else {
            printf("Você foi REPROVADO!!! Sua media é %.1f, mas sua presença segue insuficiente.", media);
        }
    }
    else{
        printf("Você foi REPROVADO!!! Sua media é %.1f.", media);
    }
    
    
    

    return 0;
}