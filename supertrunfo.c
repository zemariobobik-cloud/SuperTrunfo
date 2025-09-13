 #include <stdio.h>

int main() {
    char codigo1[15], codigo2[15];
    char estado1[20], estado2[20];
    char cidade1[30], cidade2[30];
    unsigned long int pop1=0, pop2=0 ;
    int ponttur1=0, ponttur2=0 ;
    float area1=0, area2=0, pib1=0, pib2=0;
    float denspop1=0, denspop2=0, pipperc1=0, pipperc2=0 ;
    float superpoder1=0, superpoder2=0;

    printf("\n Cadastro de Cartas de SuperTrunfo \n \n");
    printf("Cadastro Primeira Carta \n");
    //Lançamento Primeira Carta
    printf("Digite o codigo da Carta: ");
    scanf("%s", &codigo1);
    printf("Digite o Estado da Carta: ");
    scanf("%s", &estado1);
    printf("Digite o Nome da Cidade da Carta: ");
    scanf("%s", &cidade1);
    printf("Digite o Numero de Habitantes da Cidade da Carta: ");
    scanf("%ld", &pop1);
    printf("Digite a Area Total da Cidade da Carta: ");
    scanf("%f", &area1);
    printf("Digite o PIB total da Cidade da Carta: ");
    scanf("%f", &pib1);
    printf("Digite o total de Pontos Turisticos da Cidade da Carta: ");
    scanf("%d", &ponttur1);

    //Lançamento Segunda Carta
    printf("\nCadastro Segunda Carta \n");    
    printf("Digite o Codigo da Carta: ");
    scanf("%s", &codigo2);
    printf("Digite o Estado da Carta: ");
    scanf("%s", &estado2);
    printf("Digite o Nome da Cidade da Carta: ");
    scanf("%s", &cidade2);
    printf("Digite o Numero de Habitantes da Cidade da Carta: ");
    scanf("%ld", &pop2);
    printf("Digite a Area Total da Cidade da Carta: ");
    scanf("%f", &area2);
    printf("Digite o PIB total da Cidade da Carta: ");
    scanf("%f", &pib2);
    printf("Digite o total de Pontos Turisticos da cidade da Carta: ");
    scanf("%d", &ponttur2);

    //Ipressão da Primeira Carta 
    printf("\n");
    printf("Primeira Carta \n");
    printf("Codigo da Carta : %s\n", codigo1);
    printf("Estado da Carta : %s\n", estado1);
    printf("Cidade da Carta : %s\n", cidade1);
    printf("População da Carta : %ld\n", pop1);
    printf("Area da Carta : %.2f\n", area1);
    printf("PIB da Carta : %.2f\n", pib1);
    printf("Pontos Turisticos  da Carta : %d\n", ponttur1);
    denspop1 = pop1/area1;
    pipperc1 = pib1/pop1;
    printf("Densidade Populacional: %.2f hab/km² \n", denspop1);
    printf("PIB per Capita: %.2f reais \n", pipperc1);


    //Ipressão da Segunda Carta 
    printf("\n");
    printf("Segunda Carta  \n");
    printf("Codigo da Carta 2: %s\n", codigo2);
    printf("Estado da Carta 2: %s\n", estado2);
    printf("Cidade da Carta 2: %s\n", cidade2);
    printf("Populacao da Cara 2: %ld\n", pop2);
    printf("Area da Carta 2: %.2f\n", area2);
    printf("PIB da Carta 2: %.2f\n", pib2);
    printf("Pontos Turisticos  da Carta 2: %d\n", ponttur2);

    // Calculo e Imprimindo Desnsidade Demografica e Pib per capito
    denspop2 = pop2/area2;
    pipperc2 = pib2/pop2;
    printf("Densidade Populacional: %.2f hab/km² \n", denspop2);
    printf("PIB per Capita: %.2f reais \n\n", pipperc2);

    // Calculando Super Poder
    superpoder1 = (pop1 + area1 + pib1 + ponttur1 + pipperc1) - denspop1;
    superpoder2 = (pop2 + area2 + pib2 + ponttur2 + pipperc2) - denspop2;

    printf("Verificando Carta Vencedora  \n\n");
    printf("Populacao Carta 1   %ld X %ld         Populacao Carta 2 - Resultado : %d\n",pop1, pop2, (pop1 > pop2) );
    printf("Area      Carta 1   %.2f X %.2f   Area Carta 2   -    Resultado : %d\n",area1, area2, (area1 > area2) );
    printf("PIB       Carta 1   %.2f X %.2f   PIB  Carta 2   -    Resultado : %d\n",pib1, pib2, (pib1 > pib2) );
    printf("Ponto Turistico Carta 1          %d X %d       Ponto Turistico  Carta 2  -  Resultado : %d\n",ponttur1, ponttur2, (ponttur1 > ponttur2) );
    printf("PIB per Capita Carta 1           %.2f X %.2f   PIB per Capita Carta 2  -  Resultado : %d\n",pipperc1, pipperc2, (pipperc1 > pipperc2) );
    printf("Densidade Populacional Carta 1   %.2f X %.2f   Densidade Populacional Carta 2- Resultado: %d\n",denspop1, denspop2, (denspop1 < denspop2) );
    printf("SuperPoder Carta 1  %.2f X %.2f   SuperPoder  Carta 2   -    Resultado : %d\n\n\n",superpoder1, superpoder2, (superpoder1 > superpoder2) );

return 0;
}