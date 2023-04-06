#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    float taille;
    char initiales[2];
    printf("Donnez votre age et taille en mètres :");
    scanf("%i %f", &age, &taille);
    printf("Entrez vos initiales :");
    fflush(stdin);
    scanf("%s" ,initiales);
    printf("Vous avez %i ans et vous mesurez %f m Vos initiales sont %s", age, taille, initiales);
    return 0;
}