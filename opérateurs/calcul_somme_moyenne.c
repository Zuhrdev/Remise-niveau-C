#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numb;
    int numbe;
    int number;
    int somme = 0;
    float moyenne = 0;

    printf("Entrez 3 entiers separes par des espaces :");
    scanf("%i %i %i", &numb, &numbe, &number);
    somme = numb + numbe + number;
    moyenne = (float)somme / 3;
    printf("\n\tSomme = %i\n\tMoyenne = %.5f", somme, moyenne);
    return 0;
}