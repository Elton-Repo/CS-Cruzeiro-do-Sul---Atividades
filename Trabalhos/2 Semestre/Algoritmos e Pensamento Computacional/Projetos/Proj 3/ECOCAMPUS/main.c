#include <stdio.h>

/*--  INTEGRANTES  --*/
/*Elton Santos Soares                    47411341*/
/*Jennifer Silva de Almeida              */


int main() {
    FILE *arquivo;
    FILE *relatorio;

    char local[100];
    char localMaior[100];

    float consumo;
    float limite;
    float consumoTotal = 0.0;
    float consumoMedio;
    float maiorConsumo = 0.0;

    int quantidadeLocais = 0;
    int locaisAcimaLimite = 0;
    int resultadoLeitura;
    int primeiroLocal = 1;

    arquivo = fopen("consumo_campus.txt", "r");

    if (arquivo == NULL) {
        printf("Erro: nao foi possivel abrir consumo_campus.txt.\n");
        return 1;
    }

    while ((resultadoLeitura = fscanf(
                arquivo, "%99s %f %f",
                local, &consumo, &limite)) == 3) {

        quantidadeLocais++;
        consumoTotal += consumo;

        
        if (primeiroLocal || consumo > maiorConsumo) {
            maiorConsumo = consumo;
            sprintf(localMaior, "%s", local);
            primeiroLocal = 0;
        }

       
        if (consumo > limite) {
            locaisAcimaLimite++;
        }
    }

    
    if (quantidadeLocais > 0) {
        consumoMedio = consumoTotal / quantidadeLocais;
    } else {
        consumoMedio = 0.0;
    }


    /*EOF singnifica end of file(Fim do arquivo)*/
    if (resultadoLeitura == EOF) {
    printf("Fim do arquivo alcançado.\n");
} else {
    printf("Erro: registro invalido no arquivo.\n");
    return 1;
}
    fclose(arquivo);


    printf("\n===== ECOCAMPUS =====\n");
    printf("Locais analisados: %d\n", quantidadeLocais);
    printf("Consumo total: %.2f litros\n", consumoTotal);
    printf("Consumo medio: %.2f litros\n", consumoMedio);

    if (quantidadeLocais > 0) {
        printf("Maior consumo: %.2f litros\n", maiorConsumo);
        printf("Local com maior consumo: %s\n", localMaior);
    } else {
        printf("Nenhum registro encontrado.\n");
    }

    printf("Locais acima do limite: %d\n", locaisAcimaLimite);
    printf("\n=====================\n");

    
    relatorio = fopen("relatorio_consumo.txt", "w");

    if (relatorio == NULL) {
        printf("Erro: nao foi possivel criar o relatorio.\n");
        return 1;
    }

    
    fprintf(relatorio, "===== RELATORIO ECOCAMPUS =====\n");
    fprintf(relatorio, "Locais analisados: %d\n", quantidadeLocais);
    fprintf(relatorio, "Consumo total: %.2f litros\n", consumoTotal);
    fprintf(relatorio, "Consumo medio: %.2f litros\n", consumoMedio);

    if (quantidadeLocais > 0) {
        fprintf(relatorio, "Maior consumo: %.2f litros\n", maiorConsumo);
        fprintf(relatorio, "Local com maior consumo: %s\n", localMaior);
    } else {
        fprintf(relatorio, "Nenhum registro encontrado.\n");
    }

    fprintf(relatorio, "Locais acima do limite: %d\n", locaisAcimaLimite);
    fprintf(relatorio, "\n=====================\n");

    fclose(relatorio);

    printf("\nRelatorio gerado com sucesso!\n");

    return 0;
}
