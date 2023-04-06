#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter = ' ';

    //lecture de la saisie
    printf("entrez une lettre:");
    scanf("%c", &letter);

    //affichage 
    printf("\t%d en décimal\n", (int)letter);
    printf("\t%x en hexadécimal\n", (int)letter);
    return 0;
}