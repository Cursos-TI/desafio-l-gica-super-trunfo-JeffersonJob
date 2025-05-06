#include <stdio.h>
//Variáveis com número 1 relacionadas à carta 1. Com número 2 relacionadas à carta 2.
int main(){
    char estado1, estado2; //Estado
    char nome_cidade1[15], nome_cidade2[15]; //Nome da cidade
    char cod_carta1[10], cod_carta2[10]; //Código da Carta
    unsigned long int populacao1, populacao2; //Número de habitantes
    int pontos_turisticos1, pontos_turisticos2; //Pontos Turísticos
    float area1, area2; //Área em Km²
    float pib1, pib2; //PIB
    float pib_cap1, pib_cap2;
    float desin_populacao1, desin_populacao2;
    float poder1, poder2;

    printf("SUPER TRUNFO\n");

    printf("Carta 1:\n");

    printf("Digite uma letra entre 'A' e 'H' para representar um Estado entre os oito: ");
    scanf("%c", &estado1); //Usuário digita a letra.

    printf("Digite a letra do Estado seguida de um número entre 01 e 04 (ex: A01): ");
    scanf("%s", &cod_carta1); //Usuário digita a letra e o número.

    printf("Agora, o nome da cidade desejada sem acento: ");
    scanf("%s", &nome_cidade1); //Usuário digita o nome da cidade sem os acentos. Acentos não reconhecidos no resultado final.

    printf("O número de habitantes dessa cidade: ");
    scanf("%lu", &populacao1); //Usuário digita o número de habitantes, sem pontuação, números inteiros

    printf("Qual a área em km² dessa cidade: ");
    scanf("%f", &area1); //Usuário digita a área da cidade em números flutuantes (decimais)

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib1); //Usuário digita o PIB da cidade em números flutuantes (decimais)

    printf("Quantos pontos turísticos tem a cidade: ");
    scanf("%d", &pontos_turisticos1); //Usuário digita número inteiro (sem pontuação)

    printf("\n");
    
    printf("Carta 2:\n");

    printf("Digite uma letra entre 'A' e 'H' para representar um Estado entre os oito: ");
    scanf(" %c", &estado2); //Dei espaço entre as aspas e a porcentagem, para o programa funcionar perfeitamente

    printf("Digite a letra do Estado seguida de um número entre 01 e 04 (ex: A01): ");
    scanf("%s", &cod_carta2);

    printf("Agora, o nome da cidade desejada sem acentos: ");
    scanf("%s", &nome_cidade2);

    printf("O número de habitantes dessa cidade: ");
    scanf("%lu", &populacao2);

    printf("Qual a área em km² dessa cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem a cidade: ");
    scanf("%d", &pontos_turisticos2);

    pib_cap1 = (float) populacao1 / pib1;
    desin_populacao1 = populacao1 / area1;

    pib_cap2 = (float) populacao2 / pib2;
    desin_populacao2 = populacao2 / area2; //Não consegui fazer o PIB per capta com precisão*
    
    poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_cap1 - desin_populacao1;

    poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_cap2 - desin_populacao2;

    printf("\n");

    printf("CARTA 1\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %lu \n Área: %.2f km² \n PIB: %.2f Bilhões de reais \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f \n PIB per Capta: %.2f \n Super Poder: %.2f \n", estado1, cod_carta1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1, desin_populacao1, pib_cap1, poder1);

    printf("\n");

    printf("CARTA 2\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %lu \n Área: %.2f km² \n PIB: %.2f Bilhões de reais \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f \n PIB per Capta: %.2f \n Super Poder: %.2f \n", estado2, cod_carta2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2, desin_populacao2, pib_cap2, poder2);

    printf("\n");

    printf("Comparação de Cartas: \n");
    if (populacao1 > populacao2) {
        printf("População: Carta 1 Venceu!\n");
    } else {
        printf("População: Carta 2 Venceu!\n");
    }
    if (area1 > area2) {
        printf("Área: Carta 1 Venceu!\n");
    } else {
        printf("Área: Carta 2 Venceu!\n");
    }
    if (pib1 > pib2) {
        printf("PIB: Carta 1 Venceu!\n");
    } else {
        printf("PIB: Carta 2 Venceu!\n");
    }
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 Venceu!\n");
    } else {
        printf("Pontos Turísticos: Carta 2 Venceu!\n");
    }
    if (desin_populacao1 < desin_populacao2) {
        printf("Densidade Populacional: Carta 1 Venceu!\n");
    } else {
        printf("Densidade Populacional: Carta 2 Venceu!\n");
    }
    if (pib_cap1 > pib_cap2) {
        printf("PIB per Capta: Carta 1 Venceu!\n");
    } else {
        printf("PIB per Capta: Carta 2 Venceu!\n");
    }
    if (poder1 > poder2) {
        printf("Super Poder: Carta 1 Venceu!\n");
    } else {
        printf("Super Poder: Carta 2 Venceu!\n");
    }

    return 0;
}