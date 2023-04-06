#include <stdlib.h>
#include <stdio.h>

int main()
{
    int mon_int = 5;
    short mon_short = -32768;
    long mon_long = -2147483648;
    float mon_float = 1.79;
    char mon_char = 'A';
    double mon_double = 1.85;

    printf("Mon int = %i et fait %ld octets\n", mon_int, sizeof(mon_int));
    printf("Mon short = %d et fait %ld octets\n", mon_short, sizeof(mon_short));
    printf("Mon long = %ld et fait %ld octets\n", mon_long, sizeof(mon_long));
    printf("Mon float = %.2f et fait %ld octets\n", mon_float, sizeof(mon_float));
    printf("Mon char = %c et fait %ld octet\n", mon_char, sizeof(mon_char));
    printf("Mon double = %f et fait %ld octets\n", mon_double, sizeof(mon_double));
}