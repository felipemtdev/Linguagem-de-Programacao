#include <stdio.h>

int main() {
    char nome[30];
    float quilometro, gasolina, resultado;
    int opcao = 0;

    while (opcao != 2) {
        printf("\n--- MENU ---\n");
        printf("1 - Calcular consumo do carro\n");
        printf("2 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nInforme o nome do carro: ");
            scanf("%s", nome); // não precisa do & para strings

            printf("Informe a quantidade percorrida (em km): ");
            scanf("%f", &quilometro);

            printf("Informe a quantidade de gasolina consumida (em litros): ");
            scanf("%f", &gasolina);

            if (quilometro > 0 && gasolina > 0) {
                resultado = quilometro / gasolina;
                printf("\nO carro %s fez %.2f km/l.\n", nome, resultado);
            } else {
                printf("\nValores inválidos! Informe números maiores que zero.\n");
            }
        } else if (opcao != 2) {
            printf("\nOpção inválida!\n");
        }
    }

    printf("\nPrograma encerrado.\n");
    return 0;
}
