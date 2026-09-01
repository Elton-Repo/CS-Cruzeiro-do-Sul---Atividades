#include <stdio.h>

int main()
{
    int hora, minuto, horam, passa;
    
    printf("Digite a hora\n");
    scanf("%d", &hora);
    printf("Digite os minutos\n");
    scanf("%d", &minuto);
    
    
    horam = hora * 60;
    passa = horam + minuto;
    
    printf("Passaram %d minutos desde o inicio do dia", passa);
    
    return  0;

}