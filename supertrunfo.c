#include <stdio.h>

int main() {
    printf("cartas super trunfo! \n");

    char estado = "minas gerais";
    char codigoDaCIDADE[6] = "A 01" ;
    char cidade[10] = "varginha";
    int população = 148.800;
    float área = 395.6;
    float PIB =  8093809.94;
    int numeroPontosturistico = 15;
    
    printf("Digite o estado: \n", estado);

    printf("Digite o codigo: \n", codigoDaCIDADE);

    printf("digite a cidade: \n", cidade);

    printf("digite o numero de população: \s", população);

    printf("Tamanho da área: \s", área);

    printf("Qual o PIB: \s", PIB);

    printf("Numero de pontos turistico: \s",numeroPontosturistico);

    printf("nome do estado: %s - codigo: %s - cidade:%s", estado, codigoDaCIDADE, cidade);
    printf("população: %d - área: %f - PIB: %f", população, área, PIB);
    printf("numero pontos turistico: %d");

    return 0;

}