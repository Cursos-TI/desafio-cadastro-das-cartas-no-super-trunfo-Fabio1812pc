#include <stdio.h>

   int main() {
       char Estado[20], Estado2[20];
       char Cod_carta [5], Cod_carta2[5];
       char Nome_da_cidade [30], Nome_da_cidade2[30]; 
       float Area_em_km, Area_em_Km2;
       float Densidade_Populacional, Densidade_Populacional2;
       float pib_per_capita, pib_per_capita2;
       float super_poder, super_poder2;
       float soma_atribulto, soma_atribulto2;
       int Pontos_Turisticos, Pontos_Turisticos2;
       int atribulto, atribulto2;
       double PIB, PIB2;
       unsigned long int populacao, populacao2;

       printf("\n");
       printf ("=====================Carta 1====================\n");
       printf("\n");
       
       printf("Digite o nome do Estado: \n");
       scanf("%s", &Estado);
       
       printf("Digite o Código da Carta: \n");
       scanf("%s", &Cod_carta);
   
       printf("Digite o Nome da Cidade: \n");
       scanf("%s", &Nome_da_cidade);
   
       printf("Digite o total da População: \n");
       scanf("%lu", &populacao);
   
       printf("Digite a area de Extensão da Cidade: \n");
       scanf("%f,", &Area_em_km);
   
       printf("PIB: \n");
       scanf("%lf", &PIB);
   
       printf("Digite a quantidade de pontos turísticos: \n");
       scanf("%d", &Pontos_Turisticos);

       Densidade_Populacional = populacao / Area_em_km;
       pib_per_capita =PIB / Area_em_km;

       super_poder = populacao + Area_em_km + PIB + Pontos_Turisticos + (Densidade_Populacional);
    
       printf("\n");
       printf ("======================== Carta 2 ===========================\n");
       printf("\n");
   
       
       printf("Digite o nome do Estado2: \n");
       scanf("%s", &Estado2);
       
       printf("Digite o Código da Carta2: \n");
       scanf("%s", &Cod_carta2);
   
       printf("Digite o Nome da Cidade2: \n");
       scanf("%s", &Nome_da_cidade2);
   
       printf("Digite o total da População2: \n");
       scanf("%lu", &populacao2);
   
       printf("Digite a area de Extensão da Cidade2: \n");
       scanf("%f", &Area_em_Km2);
   
       printf("PIB: \n");
       scanf("%lf", &PIB2);
   
       printf("Digite a quantidade de pontos turísticos2: \n");
       scanf("%d", &Pontos_Turisticos2);

       Densidade_Populacional2 = populacao2 / Area_em_Km2;
       pib_per_capita2 =PIB2 / Area_em_Km2;

       super_poder2 = populacao2 + Area_em_Km2 + PIB2 + Pontos_Turisticos2 + (Densidade_Populacional2);

       int resultado_populacao = (populacao > populacao2) + (populacao < populacao2) *2;
       int resultado_Area_em_km = (Area_em_km > Area_em_Km2) + (Area_em_km < Area_em_Km2) *2;
       int resultado_PIB = (PIB > PIB2) + (PIB < PIB2) *2;
       int resultado_Pontos_Turisticos = (Pontos_Turisticos > Pontos_Turisticos2) + (Pontos_Turisticos < Pontos_Turisticos2) *2;
       int resultado_Densidade_Populacional = (Densidade_Populacional > Densidade_Populacional2) + (Densidade_Populacional < Densidade_Populacional2) *2;
       int resultado_pib_per_capita = (pib_per_capita > pib_per_capita2) + (pib_per_capita < pib_per_capita2) *2;
       int resultado_super_poder = (super_poder > super_poder2) + (super_poder < super_poder2) *2;

       super_poder = (float) super_poder;

       printf("super poder (carta1) maior: %.2f", super_poder);

       super_poder2 = (float) super_poder2;

       printf("super poder (carta2) maior: %.2f", super_poder);

       printf("super poder (carta2) maior: %.2f",super_poder2);
       printf("super poder: carta 1 e maior ou menor carta 2 %d\n", super_poder > super_poder2);

       printf("\n");
       printf("====================carta1=======================");
       printf("\n");

       printf("Carta 01:\n");
       printf("Estado: %s \n", Estado);
       printf("Código: %s \n", Cod_carta);
       printf("Nome da Cidade: %s \n", Nome_da_cidade);
       printf("População: %lu Habitantes\n", populacao);
       printf("Área: %.2f km²\n", Area_em_km);
       printf("PIB: %.2f Bilhões de reais\n", PIB);
       printf("Número de Pontos Turísticos: %d \n", Pontos_Turisticos);
       printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);
       printf("PIB Per Capita: %.2f reais\n", pib_per_capita);
       printf("Super Poder: %.2f\n", super_poder);


       printf("\n");
       printf("====================carta2=======================");
       printf("\n");

       printf("Carta 2:\n");
       printf("Estado: %s \n", Estado2);
       printf("Código: %s \n", Cod_carta2);
       printf("Nome da Cidade: %s \n", Nome_da_cidade2);
       printf("População: %lu Habitantes\n", populacao2);
       printf("Área: %.2f km²\n", Area_em_Km2);
       printf("PIB: %.2f Bilhões de reais\n", PIB2);
       printf("Número de Pontos Turísticos: %d \n", Pontos_Turisticos2);
       printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
       printf("PIB Per Capita: %.2f reais\n", pib_per_capita2);
       printf("Super Poder: %.2f\n", super_poder2);


       printf("\n");
       printf("====================comparar cartas=======================");
       printf("\n");
    
       printf("populacao: carta %d venceu(%d)\n", 1 + (populacao < populacao2), (populacao > populacao2) * 1);
       printf("Area: carta: %d venceu(%d)\n", 1 + (Area_em_km < Area_em_Km2), (Area_em_km > Area_em_Km2) * 1);
       printf("PIB: carta %d venceu(%d)\n", 1 + (PIB < PIB2), (PIB > PIB2) * 1);
       printf("pontos turistico: carta %d venceu(%d)\n", 1 + (Pontos_Turisticos < Pontos_Turisticos2), (Pontos_Turisticos > Pontos_Turisticos2) * 1);

       if (super_poder > super_poder2){
       printf("super poder carta1 e maior que carta2\n");
       }else {
       printf("o super poder carta1 e menor que a carta2\n");
       }

       return 0;

}