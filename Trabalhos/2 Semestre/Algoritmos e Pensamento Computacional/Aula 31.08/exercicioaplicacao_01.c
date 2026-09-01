#include <stdio.h>

int main()
{
    int manha = 0;
    int tarde = 0;
    int total = 0;
    
    printf("Quantos produtos recebidos de manhã\n");
    scanf( "%d" , &manha);

    printf("Quantos produtos recebidos de tarde\n");
    scanf( "%d" , &tarde);
    
    total = manha + tarde; 
    
    printf("Foram recebidos %d", total);
    
    return  0;

}