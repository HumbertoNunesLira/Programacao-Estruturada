#include <stdio.h>

int main() {


    double pi , r , volume;

    pi = 3.14159;

    scanf("%lf", &r);

    volume = (4.0/3) * pi * r * r * r;

    printf ("VOLUME = %.3lf", volume);

    return 0;

}
