#include <stdio.h>

   int main() {
       char Estado[20], Estado2[20];
       char Cod_carta [5], Cod_carta2[5];
       char Nome_da_cidade [30], Nome_da_cidade2[30];
       int Populacao, populacao2;
       float Area_em_km, Area_em_Km2;
       float PIB, PIB2;
       int Tot_Pontos_Turisticos, Tot_Pontos_Turisticos2;
       float Densidade_Populacional = Populacao / Area_em_km, Densidade_Populacional2 = populacao2 / Area_em_Km2;
       float pib_per_capita = Populacao / PIB, pib_per_capita2 = populacao2 / PIB2;
   
       
       printf ("Dados da Carta 1.. \n");
   
       
       printf("Digite o nome do Estado: \n");
       scanf("%s", &Estado);
       
       printf("Digite o Código da Carta: \n");
       scanf("%s", &Cod_carta);
   
       printf("Digite o Nome da Cidade: \n");
       scanf("%s", &Nome_da_cidade);
   
       printf("Digite o total da População: \n");
       scanf("%d", &Populacao);
   
       printf("Digite a area de Extensão da Cidade: \n");
       scanf("%f,", &Area_em_km);
   
       printf("PIB: \n");
       scanf("%f", &PIB);
   
       printf("Digite a quantidade de pontos turísticos: \n");
       scanf("%d", &Tot_Pontos_Turisticos);

       printf("Densidade_Populacional: %f\n, Densidade_Populacional");

       printf("pib_per_capita: %f\n, pib_per_capita");
   
       printf ("Dados da Carta 2.. \n");
   
       
       printf("Digite o nome do Estado2: \n");
       scanf("%s", &Estado2);
       
       printf("Digite o Código da Carta2: \n");
       scanf("%s", &Cod_carta2);
   
       printf("Digite o Nome da Cidade2: \n");
       scanf("%s", &Nome_da_cidade2);
   
       printf("Digite o total da População2: \n");
       scanf("%d", &populacao2);
   
       printf("Digite a area de Extensão da Cidade2: \n");
       scanf("%f", &Area_em_Km2);
   
       printf("PIB: \n");
       scanf("%f", &PIB2);
   
       printf("Digite a quantidade de pontos turísticos2: \n");
       scanf("%d", &Tot_Pontos_Turisticos2);

       printf("Densidade_Populacional2: %f\n, Densidade_Populacional2");

       printf("pib_per_capita2: %f\n, pib_per_capita2");
   
   
   
   }