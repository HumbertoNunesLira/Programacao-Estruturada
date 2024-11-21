#include <stdio.h>

int main() {


    int x , km, tempo;
    double y, distancia;

    x = 1;
    y = 1.5;

    scanf("%d", &km);

    x = x * km;
    y = y * km;

    distancia = y - x;
    tempo = (distancia * 2) *2;
    
    printf("%d minutos\n", tempo);

    return 0;

}