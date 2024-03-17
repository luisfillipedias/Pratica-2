#include <stdio.h>

int main() {
    int quantidade;
    float valor_unitario, valor_pago, total_compra, troco;

    // Solicita ao usuário que insira os dados do produto
    printf("Digite a quantidade do produto comprado: ");
    scanf("%d", &quantidade);

    printf("Digite o valor unitario do produto: ");
    scanf("%f", &valor_unitario);

    // Calcula o total da compra
    total_compra = quantidade * valor_unitario;

    // Exibe o valor total da compra
    printf("O valor total da compra eh: R$%.2f\n", total_compra);

    // Solicita ao usuário o dinheiro do cliente
    printf("Digite o valor que o cliente passou: ");
    scanf("%f", &valor_pago);

    // Calcula o troco
    troco = valor_pago - total_compra;

    printf("O troco a ser passado para o cliente eh: R$%.2f\n", troco);

    return 0;
}
