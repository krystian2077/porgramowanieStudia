#include <stdio.h>
#define PI 3.14159

float oblicz_powierzchnie(float srednica) {
    float promien = srednica / 2;
    return PI * promien * promien;
}

int main() {
    float srednica;
    printf("Podaj srednice pizzy: ");
    scanf_s("%f", &srednica);

    float powierzchnia = oblicz_powierzchnie(srednica);
    printf("Powierzchnia pizzy wynosi: %.2f jednostek kwadratowych\n", powierzchnia);

    return 0;
}