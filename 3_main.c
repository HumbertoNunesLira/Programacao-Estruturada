#include <stdio.h>

int main() {
    int x, km, tempo;
    double y, distancia;

    // Valores iniciais de x e y
    x = 1;
    y = 1.5;

    // Solicitar ao usuário a entrada para a variável km
    printf("Digite a quantidade de quilômetros: ");
    scanf("%d", &km);

    // Atualizar x e y multiplicando pelo valor de km
    x = x * km;
    y = y * km;

    // Calcular a distância
    distancia = y - x;

    // Calcular o tempo em minutos (considerando 2 minutos por quilômetro)
    tempo = distancia * 2;

    // Imprimir o resultado
    printf("O tempo estimado para percorrer %d quilômetros é de %d minutos.\n", km, tempo);

    return 0;
}