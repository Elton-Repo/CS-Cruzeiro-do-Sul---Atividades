#include <stdio.h>

int main()
{
    int participantes;
    
    do{
    printf("Digite o numero de participantes(1-3)\n");
    scanf("%d", &participantes);
    if(participantes < 1 ||participantes > 3){
        printf("Quantidade invalida de participantes, tente novamente");
        
    }
    else{
        break;
    }
    }while(participantes < 1 ||participantes > 3);
    
    printf("Seu grupo possui %d participantes\n", participantes);
    
    
    
    return 0;
}