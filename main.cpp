#include <stdio.h>

int main() {
    int kod_ascii;

    printf("Podaj kod ASCII: ");
    scanf_s("%d", &kod_ascii);

    char znak = (char)kod_ascii;

    printf("Znak odpowiadający kodowi ASCII %d to: %c\n", kod_ascii, znak);

    return 0;
}