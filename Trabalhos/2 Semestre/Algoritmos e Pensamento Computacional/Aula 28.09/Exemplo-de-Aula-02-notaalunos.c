
#include <stdio.h>

int main()
{
    int i, alunos;
    float nota, media = 0;
    
    do{
        printf("Digite a quantidade de alunos\n");
        scanf("%d", &alunos);
        
        if(alunos <= 0){
            printf("Quantidade de alunos não definida, tente novamente \n");
        } 
    }while(alunos <= 0);
    
    for (i = 1;i <= alunos; i++)
    
        do{
            printf("Qual a nota do aluno %d? \n", i);
            scanf("%f", &nota);
            
            if(nota > 10 || nota < 0){
                printf("Nota invalida\n");
            }
            else{
                media += nota;
            }
            
        }while(nota > 10 || nota < 0);
        
    media = media/alunos;    
        
    printf("A media da turma é : %.1f\n", media);
        
        
     return 0;   
}
