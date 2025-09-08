#include <stdio.h>

int main() {
    float compr, larg, prof, m3, preco_m3, total;

    printf("Digite o comprimento: ");
    scanf("%f", &compr);

    printf("Digite a largura: ");
    scanf("%f", &larg);

    printf("Digite a profundidade: ");
    scanf("%f", &prof);

    printf("Digite o preco por metro cubico: ");
    scanf("%f", &preco_m3);

    if (compr > 6 && larg > 3 && prof > 1 && preco_m3 > 0) {
        m3 = compr * larg * prof;   // cálculo do volume
        total = m3 * preco_m3;      // cálculo do custo
        printf("Total a pagar: R$ %.2f\n", total);
    } else {
        printf("Nao foi possivel calcular!\n");
    }

    return 0;
}
