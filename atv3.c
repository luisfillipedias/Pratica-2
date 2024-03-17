#include <stdio.h>

int main() {
    float salario, percentual, novo_salario;

    // Solicita ao usuário que insira o salário e o percentual de aumento
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento (em decimal): ");
    scanf("%f", &percentual);

    // Calcula o novo salário aumentado
    novo_salario = salario * (1 + percentual);

    // Exibe o novo salário
    printf("O novo salario aumentado eh: %.2f\n", novo_salario);

    return 0;
}
