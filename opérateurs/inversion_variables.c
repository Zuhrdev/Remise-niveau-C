#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1 = 123;
    int var2 = 18;
    int intermediate;
    printf("var1 : %i\nvar2 : %i\n----------\n", var1, var2);
    intermediate = var1;
    var1 = var2;
    var2 = intermediate;
    printf("var1 : %i\nvar2 : %i\n", var1, var2);
    return 0;
}