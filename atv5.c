#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Solicita ao usuário que insira a temperatura em Fahrenheit
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Converte Fahrenheit para Celsiusa
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    // Exibe a temperatura equivalente em Celsius
    printf("A temperatura equivalente em graus Celsius eh: %.2f\n", celsius);

    return 0;
}
