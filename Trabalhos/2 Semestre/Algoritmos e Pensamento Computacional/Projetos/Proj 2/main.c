/*
Ana Carolina Porto de Albuquerque           -RGM 050025210
Elton Santos Soares                         -RGM 47411341
Jennifer Silva de Almeida                   -RGM 38049589



*/


#include <stdio.h>

int main()
{
    int codigo, test1, test2, test3, total, continuar;
    float media;
 
/* Bugs
    - Digitar uma letra causa looping infinito


*/   



    do{
        total = 0;
        printf("MISSÃO ORBITAL:SIMULADOR DE TREINAMENTO ESPACIAL\n");
        printf("        ---Teste de Aptidão---\n\n");
        printf("Digite o Código do Cadete\n");
        scanf("%d", &codigo);
        
        
        
        
        for(int i = 0; i < 3; i++){
            do{
                if(i == 0){
                    printf("Primeiro Teste - Aptidão Fisica\n");
                    scanf("%d", &test1);
                
                    if(test1 < 0 || test1 > 100){
                      printf("Valores invalidos -- Tente Novamente\n \n");
                    }
                }    
                else if(i == 1){
                    printf("Segundo Teste - Aptidão Cognitiva\n");
                    scanf("%d", &test2);
                
                    if(test2 < 0 || test2 > 100){
                        printf("Valores invalidos -- Tente Novamente\n \n");
                    }                
                }    
                else{
                    printf("Terceiro Teste - Aptidão Motora\n");
                    scanf("%d", &test3);
                
                    if(test3 < 0 || test3 > 100){
                        printf("Valores invalidos -- Tente Novamente\n \n");
                    }
                }    
                
                
                
            }while(
                (i == 0 && (test1 < 0 || test1 > 100)) ||
                (i == 1 && (test2 < 0 || test2 > 100)) ||
                (i == 2 && (test3 < 0 || test3 > 100))
                );
        }
    
        total = (test1+test2+test3);
        media = total/3;
    
        printf("--------------Classificação-------------\n");
        if(media >= 85){
            printf("   * Comandante da missão *\n");
            printf("Treinamento concluído com excelência\n");
            if(total >= 300){
                printf("Parabens pela PONTUAÇÃO MÁXIMA!\n");
            }
        }
        
        else if(media >= 70){
            printf("   * Piloto aprovado *\n");
            printf("Cadete autorizado para a missão\n");
        }
    
        else if(media >= 50){
            printf("   * Cadete em recuperação *\n");
            printf("Novo treinamento recomendado\n");
        }
        
        else{
            printf("   * Treinamento reiniciado *\n");
            printf("Cadete ainda não autorizado\n");
        }
        
        printf("\n======== MISSÃO ORBITAL ========\n");
        printf("Codigo do Cadete : %d\n", codigo);
        printf("================================\n");
        printf("Pontuação do Primeiro Teste : %d\n", test1);
        printf("Pontuação do Segundo  Teste : %d\n", test2);
        printf("Pontuação do Terceiro Teste : %d\n", test3);
        printf("---------------------------------\n");
        printf("        *  Resultado  *\n", test1);
        printf("Pontuação Média  : %.1f\n", media);
        printf("Pontuação Total  : %d\n", total);
        printf("Classificação    : ");
        
        if(media >= 85){
            printf("Comandante da missão\n");
            
        }
        
        else if(media >= 70){
            printf("Piloto aprovado\n");
        }
    
        else if(media >= 50){
            printf("Cadete em recuperação\n");
        }
        
        else{
            printf("Treinamento reiniciado\n");
        }
        
        
        
        
        do{
            printf("\n\nAvaliar outro cadete? 1-Sim | 0-Nao: \n");
            scanf("%d", &continuar);
            printf("\n");
            if(continuar > 1 || continuar <  0){
                printf("digito invalidos\n");
            };
            
        }while(continuar < 0 || continuar > 1);
    
    }while (continuar == 1);
        
    printf("Sistema encerrado.\n");

    return 0;


}