#include <stdio.h>
// Não compreedi direito o desafio. Estou fazendo com estou entendendo.**
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
    int opcao;

    printf("SUPER TRUNFO\n");

    printf("Cadastro de cartas\n");

    printf("Carta 1\n");

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

    printf("Comparação de Cartas: \n");
    
    printf("Escolha qual atributo deseja comparar:\n");
    printf("[1] Cartas (Todos os atributos)\n");
    printf("[2] População\n");
    printf("[3] Área\n");
    printf("[4] PIB\n");
    printf("[5] Pontos Turísticos\n");
    printf("[6] Densidade Populacional\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("CARTA 1\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %lu \n Área: %.2f km² \n PIB: %.2f Bilhões de reais \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f \n PIB per Capta: %.2f \n Super Poder: %.2f \n", estado1, cod_carta1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1, desin_populacao1, pib_cap1, poder1);

        printf("\n");

        printf("CARTA 2\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %lu \n Área: %.2f km² \n PIB: %.2f Bilhões de reais \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f \n PIB per Capta: %.2f \n Super Poder: %.2f \n", estado2, cod_carta2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2, desin_populacao2, pib_cap2, poder2);
        break;
    case 2:
        if (populacao1 > populacao2) {
            printf("Na disputa entre Populações a carta vencedora é a Carta 1! Com %lu habitantes.\n", populacao1);
        }else if (populacao2 > populacao1) {
            printf("Na disputa entre Populações a carta vencedora é a CArta 2! Com %lu habitantes.\n", populacao2);
        }else {
            printf("Nesse quesito as cartas empatam!\n");
        }
        break;
    case 3:
        if (area1 > area2) {
            printf("Na disputa entre Áreas a carta vencedora é a Carta 1! Com área de %.2f km².\n ", area1);
        } else if (area2 > area1) {
            printf("Na disputa entre Áreas a carta vencedora é a Carta 2! Com área de %.2f km².\n ", area2);
        } else {
            printf("Nesse quesito as cartas empatam!\n");
        }
        break;
    case 4:
        if (pib1 > pib2) {
            printf("Na disputa entre PIB a carta vencedora é a Carta 1! Com pib de %.2f bilhões de reais.\n", pib1);
        } else if (pib2 > pib1) {
            printf("Na disputa entre PIB a carta vencedora é a Carta 2! Com pib de %.2f bilhões de reais.\n", pib2);
        } else {
            printf("Nesse quesito as cartas empatam!\n");
        }
        break;
    case 5:
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Na disputa entre Pontos Turísticos a carta vencedora é a Carta 1! Com %d pontos turísticos.\n", pontos_turisticos1);
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("Na disputa entre Pontos Turísticos a carta vencedora é a Carta 2! Com %d pontos turísticos.\n", pontos_turisticos2);
        } else {
            printf("Nesse quesito as cartas empatam!\n");
        }
        break;
    case 6:
        if (desin_populacao1 < desin_populacao2) {
            printf("Na disputa entre Densidade Populacional a carta vencedora é a Carta 1! Com densidade de %.2f.\n", desin_populacao1);
        } else if (desin_populacao2 < desin_populacao1) {
            printf("Na disputa entre Densidade Populacional a carta vencedora é a Carta 2! Com densidade de %.2f.\n", desin_populacao2);
        } else {
            printf("Nesse quesito as cartas empatam!\n");
        }        
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }
    return 0;
}