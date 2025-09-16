 #include <stdio.h>

int main() {
    char codigo1[15], codigo2[15];
    char pais1[20], pais2[20];
    unsigned long int populacao1=0, populacao2=0 ;
    int ponttur1=0, ponttur2=0, atributo1=0, atributo2 =0 ,
    atributo1vencedor=0,  atributo2vencedor=0,  atributocampeao=0;
    float area1=0, area2=0, pib1=0, pib2=0;
    float denspop1=0, denspop2=0, pipperc1=0, pipperc2=0 ,
    
    Carta1Atributo1=0, Carta2Atributo1=0,
    Carta1Atributo2=0, Carta2Atributo2=0;
    

    printf("\n Cadastro de Cartas de SuperTrunfo \n \n");
    printf("Cadastro Primeira Carta \n");
    //Lançamento Primeira Carta
    printf("Digite o codigo : ");
    scanf("%s", &codigo1);
    printf("Digite o nome do Pais : ");
    scanf("%s", &pais1);
    printf("Digite o Numero de Habitantes do Pais : ");
    scanf("%ld", &populacao1);
    printf("Digite a Area Total do Pais : ");
    scanf("%f", &area1);
    printf("Digite o PIB total do Pais : ");
    scanf("%f", &pib1);
    printf("Digite o total de Pontos Turisticos do Pais: ");
    scanf("%d", &ponttur1);

    //Lançamento Segunda Carta
    printf("\nCadastro Segunda Carta \n");    
    printf("Digite o Codigo : ");
    scanf("%s", &codigo2);
    printf("Digite o nome do Pais : ");
    scanf("%s", &pais2);
    printf("Digite o Numero de Habitantes do Pais: ");
    scanf("%ld", &populacao2);
    printf("Digite a Area Total do Pais: ");
    scanf("%f", &area2);
    printf("Digite o PIB total do Pais: ");
    scanf("%f", &pib2);
    printf("Digite o total de Pontos Turisticos do Pais: ");
    scanf("%d", &ponttur2);

    //Ipressão da Primeira Carta 
    printf("\n");
    printf("Primeira Carta Pais %s\n", pais1);
    printf("Codigo da Carta : %s\n", codigo1);
    printf("População da Carta : %ld\n", populacao1);
    printf("Area da Carta : %.2f\n", area1);
    printf("PIB da Carta : %.2f\n", pib1);
    printf("Pontos Turisticos  da Carta : %d\n", ponttur1);
    denspop1 = populacao1/area1;
    pipperc1 = pib1/populacao1;
    printf("Densidade Populacional: %.2f hab/km² \n", denspop1);
    printf("PIB per Capita: %.2f reais \n", pipperc1);


    //Ipressão da Segunda Carta 
    printf("\n");
    printf("Segunda Carta  Pais %s\n",pais2);
    printf("Codigo da Carta 2: %s\n", codigo2);
    printf("Populacao da Carta 2: %ld\n", populacao2);
    printf("Area da Carta 2: %.2f\n", area2);
    printf("PIB da Carta 2: %.2f\n", pib2);
    printf("Pontos Turisticos  da Carta 2: %d\n", ponttur2);

    // Calculo e Imprimissao Desnsidade Demografica e Pib per capito
    denspop2 = populacao2/area2;
    pipperc2 = pib2/populacao2;
    printf("Densidade Populacional: %.2f hab/km \n", denspop2);
    printf("PIB per Capita: %.2f reais \n\n", pipperc2);
    
    // Escolha do Primeiro Atributo de Comparação
    printf("Primeiro Atributo para Disputa\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha a opcao : ");
    scanf("%d",&atributo1);

    // Escolha do Segungo Atributo de Comparação 
    printf("\nSegungo Atributo para Disputa\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha a opcao : ");
    scanf("%d",&atributo2);

    if (atributo1==atributo2)  // Se escolha de atributos Iguais, Para o Jogo
        printf("\nAtributos iguais nao sao permitidos !\n"); 
    else 
      {  
      /* atributo1vencedor inicializado = 0 
         atributo1vencedor = 0 , empate no primeiro atributo selecionado em ambas cartas 
         atributo1vencedor = 1 , Vitória da Carta 1
         atributo1vencedor = 2 , Vitória da Carta 2
      */  
      printf("\nPais Primeira Carta   %s   -   %s   Pais Segunda Carta\n",pais1, pais2);  
      // Impressão do valor e Identificação do Primeiro Atributo Vencedor das duas Cartas
      switch (atributo1)  
        {
        case 1: 
          printf("Primiera Disputa por Pupulacao \n");
          printf("Carta 1 -   %d X %d   - Carta 2\n", populacao1, populacao2);
          if (populacao1 != populacao2) atributo1vencedor =  populacao1 > populacao2 ? 1 : 2;
          break;
        case 2:   
          printf("Primiera Disputa por Area \n");
          printf("Carta 1 -   %.2fd X %.2f   - Carta 2\n", area1, area2);
          if (area1 != area2)  atributo1vencedor =  area1 > area2 ? 1 : 2;
          break;
        case 3:   
          printf("Primiera Disputa por PIB \n");
          printf("Carta 1 -   %.2f X %.2f   - Carta 2\n", pib1, pib2);
          if (pib1 != pib2)  atributo1vencedor =  pib1 > pib2 ? 1 : 2;
          break;
        case 4:
          printf("Primiera Disputa por Total de Pontos Turisticos\n");
          printf("Carta 1 -   %d X %d   - Carta 2\n", ponttur1, ponttur2);
          if (ponttur1 != ponttur2)  atributo1vencedor =  ponttur1 > ponttur2 ? 1 : 2;
          break;
        case 5:  
          printf("Primiera Disputa por Total Densidade Demografica\n");
          printf("Carta 1 -   %.2f X %.2f   - Carta 2\n", denspop1, denspop2);
          if (denspop1 != denspop2) atributo1vencedor =  denspop1 < denspop1 ? 1 : 2;
          break;

        default:
          printf("\nPrimeira Opcao Invalida!");
          break;
        }
      /* atributo1vencedor inicializado = 0 
         atributo1vencedor = 0 , empate no primeiro atributo selecionado em ambas cartas 
         atributo1vencedor = 1 , Vitória da Carta 1
         atributo1vencedor = 2 , Vitória da Carta 2
      */  
      // Impressão do valor e Identificação do Segundo Atributo Vencedor das duas Cartas
      switch (atributo2)  
        {
        case 1: 
          printf("Segunda Disputa por Pupulacao \n");
          printf("Carta 1 -   %d X %d   - Carta 2\n", populacao1, populacao2);
          if (populacao1 != populacao2)  atributo2vencedor =  populacao1 > populacao2 ? 1 : 2;
          break;
        case 2:   
          printf("Segunda Disputa por Area \n");
          printf("Carta 1 -   %.2fd X %.2f   - Carta 2\n", area1, area2);          
          if (area1 != area2) atributo2vencedor =  area1 > area2 ? 1 : 2;
          break;
        case 3:   
          printf("Segunda Disputa por PIB\n");
          printf("Carta 1 -   %.2f X %.2f   - Carta 2\n", pib1, pib2);
          if (pib1 != pib2) atributo2vencedor =  pib1 > pib2 ? 1 : 2;
          break;
        case 4:
          printf("Segunda Disputa por Total de Pontos Turisticos\n");
          printf("Carta 1 -   %d X %d   - Carta 2\n", ponttur1, ponttur2);
          if (ponttur1 != ponttur2)  atributo2vencedor =  ponttur1 > ponttur2 ? 1 : 2;
          break;
        case 5:  
          printf("Segunda Disputa por Total Densidade Demografica\n");
          printf("Carta 1 -   %.2f X %.2f   - Carta 2\n", denspop1, denspop2);
          if (denspop1 != denspop2)  atributo2vencedor =  denspop1 < denspop2 ? 1 : 2;
          break;

        default:
          printf("\nSegunda Opcao Invalida!\n");
          break;
        }
      atributocampeao  =  atributo1vencedor + atributo2vencedor ;

      /* atributocampeao == 0 , Empate nos dois atributos Selecionados
         atributocampeao == 3 , Uma Vitótia para cada carta,  Empate no Jogo
         atributocampeao == 1 , Vitória da Carta 1 em Um Atributo e Zero Vitoria da Carta 2
         atributocampeao == 2 && atributo2vencedor==1 , Vitória da Carta 1 nos 2 Atributos
         atributocampeao == 2 && (atributo1vencedor==0 || atributo2vencedor==0), Vitória da Carta 2 em Um Atributo e Zero Vitoria da Carta 1
         atributocampeao == 4 , Vitória da Carta 2 nos 2 Atributos
      */  
      //printf("\n %d , %d , %d\n\n",atributocampeao,atributo1vencedor,atributo2vencedor);

      if (atributocampeao == 0 || atributocampeao == 3) printf("\n ***  Empate  ***\n\n");
      else if (atributocampeao == 1 || (atributocampeao == 2 && atributo2vencedor==1) ) 
        printf("\n ***  Carta 1 Campea !  ***\n\n");
      else printf("\n ***  Carta 2 Campea !  ***\n\n"); 

      }
      
  
    
return 0;
}