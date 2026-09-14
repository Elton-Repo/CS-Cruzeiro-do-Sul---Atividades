#include <stdio.h>


int main(){
    int quantidade;
    float preco;
    float valor;
    
    
    printf("Quantos cafés irá comprar? ");
    scanf("%d", &quantidade);
    
    printf("Qual o preço? ");
    scanf("%f", &preco);

    valor = preco * quantidade;
    printf("O custo do café é <R$%.2f>", valor);
    
    
    return 0;
}