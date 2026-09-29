#include <stdio.h>

int main()
{
    char cpf[12];
    float preco, total;
    
    printf("Digite o CPF do cliente\n");
    scanf("%11s", cpf);
    
    preco = 1;    
        
    while(preco != 0){
        
            printf("Digite o Preço\n");
            scanf("%f", &preco );
            
            if ( preco > 0){
                total = total + preco;
            }
            
    }
    
    printf("CPF : %s \n", cpf);
    printf("Total : $%.2f", total);
    
    
    return 0;
}
