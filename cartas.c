#include <stdio.h>

int main() {
    // carta 1
    char est1, cod1[4], nome1[50];
    unsigned long pop1;
    float area1, pib1;
    int pts1;
    float dens1, ppc1, poder1;

    // carta 2
    char est2, cod2[4], nome2[50];
    unsigned long pop2;
    float area2, pib2;
    int pts2;
    float dens2, ppc2, poder2;

    // entrada carta 1
    printf("carta 1\n");
    printf("estado (a-h): ");
    scanf(" %c", &est1);

    printf("codigo (ex: a01): ");
    scanf("%s", cod1);

    printf("cidade: ");
    scanf(" %[^\n]", nome1);

    printf("populacao: ");
    scanf("%lu", &pop1);

    printf("area (km2): ");
    scanf("%f", &area1);

    printf("pib (bi): ");
    scanf("%f", &pib1);

    printf("pontos turisticos: ");
    scanf("%d", &pts1);

    // calculo carta 1
    dens1 = pop1 / area1;
    ppc1 = (pib1 * 1e9) / pop1;
    poder1 = pop1 + area1 + (pib1 * 1e9) + pts1 + ppc1 + (1.0f / dens1);

    // entrada carta 2
    printf("\ncarta 2\n");
    printf("estado (a-h): ");
    scanf(" %c", &est2);

    printf("codigo (ex: b02): ");
    scanf("%s", cod2);

    printf("cidade: ");
    scanf(" %[^\n]", nome2);

    printf("populacao: ");
    scanf("%lu", &pop2);

    printf("area (km2): ");
    scanf("%f", &area2);

    printf("pib (bi): ");
    scanf("%f", &pib2);

    printf("pontos turisticos: ");
    scanf("%d", &pts2);

    // calculo carta 2
    dens2 = pop2 / area2;
    ppc2 = (pib2 * 1e9) / pop2;
    poder2 = pop2 + area2 + (pib2 * 1e9) + pts2 + ppc2 + (1.0f / dens2);

    // exibicao
    printf("\ncarta 1\n");
    printf("estado: %c\n", est1);
    printf("codigo: %s\n", cod1);
    printf("cidade: %s\n", nome1);
    printf("populacao: %lu\n", pop1);
    printf("area: %.2f km2\n", area1);
    printf("pib: %.2f bi\n", pib1);
    printf("pontos turisticos: %d\n", pts1);
    printf("densidade: %.2f hab/km2\n", dens1);
    printf("pib per capita: %.2f\n", ppc1);
    printf("super poder: %.2f\n", poder1);

    printf("\ncarta 2\n");
    printf("estado: %c\n", est2);
    printf("codigo: %s\n", cod2);
    printf("cidade: %s\n", nome2);
    printf("populacao: %lu\n", pop2);
    printf("area: %.2f km2\n", area2);
    printf("pib: %.2f bi\n", pib2);
    printf("pontos turisticos: %d\n", pts2);
    printf("densidade: %.2f hab/km2\n", dens2);
    printf("pib per capita: %.2f\n", ppc2);
    printf("super poder: %.2f\n", poder2);

    // comparacoes
    printf("\ncomparacao\n");

    printf("populacao: carta %d venceu\n", pop1 > pop2 ? 1 : 2);
    printf("area: carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("pib: carta %d venceu\n", pib1 > pib2 ? 1 : 2);
    printf("pontos turisticos: carta %d venceu\n", pts1 > pts2 ? 1 : 2);
    printf("densidade (menor vence): carta %d venceu\n", dens1 < dens2 ? 1 : 2);
    printf("pib per capita: carta %d venceu\n", ppc1 > ppc2 ? 1 : 2);
    printf("super poder: carta %d venceu\n", poder1 > poder2 ? 1 : 2);

    return 0;
}
