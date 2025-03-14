#include <stdio.h>

int main() {
    printf("cartas super trunfo! \n");

    char estado;
    char codigoDaCIDADE[6];
    char cidade;
    int população;
    float área;
    float PIB;
    int numeroPontosturistico;
    
    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo: \n");
    scanf("%s", &codigoDaCIDADE);

    printf("digite a cidade: \n");
    scanf("%s", &cidade);

    printf("digite o numero de população: \s");
    scanf("%d", &população);

    printf("Tamanho da área: \s");
    scanf("%f", &área);

    printf("Qual o PIB: \s");
    scanf("%f",&PIB);

    printf("Numero de pontos turistico: \s");
    scanf("%d", &numeroPontosturistico);

    printf("nome do estado: %s - codigo: %s - cidade:%s", estado, codigoDaCIDADE, cidade);
    printf("população: %d - área: %f - PIB: %f", população, área, PIB);
    printf("numero pontos turistico: %d");

    return 0;

}