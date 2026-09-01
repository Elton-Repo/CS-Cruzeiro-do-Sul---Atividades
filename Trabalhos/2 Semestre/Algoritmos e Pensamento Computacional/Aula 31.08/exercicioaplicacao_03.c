#include <stdio.h>

int main()
{
    int watts,horas;
    float kwh;
    
    printf("Digite a potencia do equipamento(W)\n");
    scanf("%d", &watts);
    printf("Digite as horas de consumo por dia\n");
    scanf("%d", &horas);
    
    kwh = (watts*horas*30)/1000.f;
    
    printf("O Consumo mensal seria %.02f", kwh);
    
    return  0;

}