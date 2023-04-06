#include <stdio.h>
#include <stdlib.h>

int main()
{
    int euros;
    float dollars;
    const float change = 1.09;
    printf("Entrez votre montant en euros:");
    scanf("%i", &euros);
    dollars = euros * change;
    printf("Le taux de change euros => Dollars est de 1.09.\n Vous avez donc %.2f dollars", dollars);
    return 0;
}