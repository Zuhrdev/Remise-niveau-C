#include <stdlib.h>
#include <stdio.h>

int main()
{
    int hauteur;
    int larg;
    int perimetre = 0;
    int surface = 0;

    printf("Donnez la hauteur et la largeur du rectangle:");
    scanf("%i %i", &hauteur, &larg);
    perimetre = 2*(larg) + 2*(hauteur);
    surface = larg * hauteur;
    printf("\tPerimetre : %i\n\tSurface : %i\n", perimetre, surface);
    return 0;
}