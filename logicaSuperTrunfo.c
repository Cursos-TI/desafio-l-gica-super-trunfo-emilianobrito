#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Desafio: nível novato

int main()
{
    int atributo;
    char atributo_escolhido[50];
    float valor_atributo_carta1;
    float valor_atributo_carta2;
//    int valor_atributo_int1;
//    int valor_atributo_int2;
//    char grandeza[50];
    char valor_com_grandeza_carta1[200];
    char valor_com_grandeza_carta2[200];

    // Declaração das variáveis da carta 1
    char pais_carta1[50]; 
    char estado_carta1[50]; 
    char codigo_carta1[5];
    char cidade_carta1[50];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;
    float densidade_populacional_carta1;
    float pib_per_capita_carta1;
    float super_poder_carta1;

    // Declaração das variáveis da carta 2
    char pais_carta2[50]; 
    char estado_carta2[50];
    char codigo_carta2[5];
    char cidade_carta2[50];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;
    float densidade_populacional_carta2;
    float pib_per_capita_carta2;
    float super_poder_carta2;

    // leitura de dados da Carta 1
    printf("Digite o país da Carta 1: ");
    fgets(pais_carta1, 50, stdin); // A função fgets é usada para ler strings com espaços
    pais_carta1[strcspn(pais_carta1, "\n")] = 0; /* remove o caractere de nova linha (\n) que fgets pode incluir na variavel de tipo string 
    evitando erro de impressão de nova linha */

    printf("Digite a sigla do estado da Carta 1 (Utilize letras maiúsculas): ");
    scanf("%s", estado_carta1);

    printf("Digite o código da Carta 1 (A sigla do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigo_carta1);
    getchar(); // remove o último caractere lido (\n) do buffer e evita o erro com o fgets

    printf("Digite a cidade da Carta 1: ");
    fgets(cidade_carta1, 50, stdin); // A função fgets é usada para ler strings com espaços
    cidade_carta1[strcspn(cidade_carta1, "\n")] = 0; /* remove o caractere de nova linha (\n) que fgets pode incluir na variavel de tipo string 
    evitando erro de impressão de nova linha */

    printf("Digite o numero da populacão da Carta 1: ");
    scanf("%d", &populacao_carta1);

    printf("Digite a área em Km² da Carta 1: ");
    scanf("%f", &area_carta1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib_carta1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontos_turisticos_carta1);
    getchar(); // remove o último caractere lido (\n)

    // leitura de dados da Carta 2
    printf("\nDigite o país da Carta 2: ");
    fgets(pais_carta2, 50, stdin); // A função fgets é usada para ler strings com espaços
    pais_carta2[strcspn(pais_carta2, "\n")] = 0; /* remove o caractere de nova linha (\n) que fgets pode incluir na variavel de tipo string 
    evitando erro de impressão de nova linha */

    printf("Digite a sigla do estado da Carta 2 (Utilize letras maiúsculas): ");
    scanf("%s", estado_carta2);

    printf("Digite o código da Carta 2 (A sigla do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigo_carta2);
    getchar(); // remove o último caractere lido (\n) e evita o erro com o fgets

    printf("Digite o nome da cidade da Carta 2: ");
    fgets(cidade_carta2, 50, stdin); // A função fgets é usada para ler strings com espaços
    cidade_carta2[strcspn(cidade_carta2, "\n")] = 0;
   
    printf("Digite o numero da populacão da Carta 2: ");
    scanf("%d", &populacao_carta2);

    printf("Digite a área em Km² da Carta 2: ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib_carta2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos_carta2);

    //Calcula a Densidade Populacional: Divide a população da cidade pela sua área.
    densidade_populacional_carta1 = (float) populacao_carta1/area_carta1;
    densidade_populacional_carta2 = (float) populacao_carta2/area_carta2;

    //Calcula o PIB per Capita: Divide o PIB da cidade pela sua população.
    pib_per_capita_carta1 = (float) pib_carta1*1000000000/populacao_carta1;
    pib_per_capita_carta2 = (float) pib_carta2*1000000000/populacao_carta2;

    //Calcula o Super Poder da Carta 1 
    super_poder_carta1 = (float)populacao_carta1+area_carta1+pib_carta1+
                         (float)pontos_turisticos_carta1+(1/densidade_populacional_carta1)+pib_per_capita_carta1;  
                         
    //Calcula o Super Poder da Carta 2 
    super_poder_carta2 = (float)populacao_carta2+area_carta2+pib_carta2+
                         (float)pontos_turisticos_carta2+(1/densidade_populacional_carta2)+pib_per_capita_carta2; 
    
    printf("\n Digite o número do atributo que você quer comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");  
    scanf("%d", &atributo); 

    switch(atributo) {
        case 1:           
            strcpy(atributo_escolhido, "População"); // Atribui o valor(população) à string atributo_escolhido
            valor_atributo_carta1 = populacao_carta1;
            valor_atributo_carta2 = populacao_carta2;
            sprintf(valor_com_grandeza_carta1, "%d", populacao_carta1);
            sprintf(valor_com_grandeza_carta2, "%d", populacao_carta2);
            break;
        case 2: 
            strcpy(atributo_escolhido, "Área");
            valor_atributo_carta1 = area_carta1;
            valor_atributo_carta2 = area_carta2;
            sprintf(valor_com_grandeza_carta1, "%.2f Km²", area_carta1);
            sprintf(valor_com_grandeza_carta2, "%.2f Km²", area_carta2);
            break;
        case 3: 
            strcpy(atributo_escolhido, "Pib");
            valor_atributo_carta1 = pib_carta1;
            valor_atributo_carta2 = pib_carta2;
            sprintf(valor_com_grandeza_carta1, "%.2f bilhões de reais", pib_carta1);
            sprintf(valor_com_grandeza_carta2, "%.2f bilhões de reais", pib_carta2);

            break;
        case 4: 
            strcpy(atributo_escolhido, "Número de pontos turísticos");
            valor_atributo_carta1 = pontos_turisticos_carta1;
            valor_atributo_carta2 = pontos_turisticos_carta2;
            sprintf(valor_com_grandeza_carta1, "%d", pontos_turisticos_carta1);
            sprintf(valor_com_grandeza_carta2, "%d", pontos_turisticos_carta2);
            break;
        case 5: 
            strcpy(atributo_escolhido, "Densidade Populacional"); 
            valor_atributo_carta1 = densidade_populacional_carta1;
            valor_atributo_carta2 = densidade_populacional_carta2;
            sprintf(valor_com_grandeza_carta1, "%.2f hab/Km²", densidade_populacional_carta1);
            sprintf(valor_com_grandeza_carta2, "%.2f hab/Km²", densidade_populacional_carta2);
            break;
        case 6:
            strcpy(atributo_escolhido, "PIB per capita");
            valor_atributo_carta1 = pib_per_capita_carta1;
            valor_atributo_carta2 = pib_per_capita_carta2;
            sprintf(valor_com_grandeza_carta1, "%.2f reais", pib_per_capita_carta1);
            sprintf(valor_com_grandeza_carta2, "%.2f reais", pib_per_capita_carta2);
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            return 0;
    }

    // Impressão da Carta 1
    printf("\nCarta 1:\n");
    printf("País: %s\n", pais_carta1);
    printf("Estado: %s\n", estado_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f Km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_carta1); //8.102,63
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta1); //56.736,71
    printf("Super poder da carta 1: %.2f\n", super_poder_carta1);

    // Impressão da Carta 2
    printf("\nCarta 2:\n");
    printf("País: %s\n", pais_carta2);
    printf("Estado: %s\n", estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f Km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_carta2); //5.622,16
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta2); //44.531,71
    printf("Super poder da carta 2: %.2f\n", super_poder_carta2);   

    printf("\n######### Resultado da comparação de cartas #########\n");
    printf("Atributo escolhido: %s\n\n", atributo_escolhido);
    printf("Carta 1\nCidade: %s (%s)\n%s: %s\n", cidade_carta1, pais_carta1, atributo_escolhido, valor_com_grandeza_carta1);
    printf("\nCarta 2\nCidade: %s (%s)\n%s: %s\n\n", cidade_carta2, pais_carta2, atributo_escolhido, valor_com_grandeza_carta2);
    
    //impressão condicionada
    if (valor_atributo_carta1 == valor_atributo_carta2){
        printf("Empate!");
    } else if (strcmp(atributo_escolhido, "Densidade Populacional") == 0) {
        if (valor_atributo_carta1 < valor_atributo_carta2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade_carta1);
        } else if (valor_atributo_carta1 > valor_atributo_carta2){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade_carta2);
        }
    } else {
        if (valor_atributo_carta1 > valor_atributo_carta2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade_carta1);
        } else if (valor_atributo_carta1 < valor_atributo_carta2){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade_carta2);
        }
    }

    return 0;
}

/*
    if (strcmp(atributo_escolhido, "População") == 0 || strcmp(atributo_escolhido, "Número de pontos turísticos") == 0) {
        valor_atributo_int1 = (int)valor_atributo_carta1;
        valor_atributo_int2 = (int)valor_atributo_carta2;
        printf("Carta 1\nCidade: %s (%s)\n%s: %d\n", cidade_carta1, pais_carta1, atributo_escolhido, valor_atributo_int1);
        printf("\nCarta 2\nCidade: %s (%s)\n%s: %d\n\n", cidade_carta2, pais_carta2, atributo_escolhido, valor_atributo_int2);
    } else{
        printf("Carta 1\nCidade: %s (%s)\n%s: %.2f %s\n", cidade_carta1, pais_carta1, atributo_escolhido, valor_atributo_carta1, grandeza);
        printf("\nCarta 2\nCidade: %s (%s)\n%s: %.2f %s\n\n", cidade_carta2, pais_carta2, atributo_escolhido, valor_atributo_carta2, grandeza);
    }
*/