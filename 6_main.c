#include <stdio.h>

int main() {
    
    int x;
    double y, media;

    scanf("%d", &x);
    scanf("%lf", &y);
    
    media = x/y;

    printf("%.3lf km/l\n", media);

    return 0;

}