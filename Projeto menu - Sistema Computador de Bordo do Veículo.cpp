#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int opcao = 1;
    char carro[30];
    float distancia, litros, consumo, km, autonomia;

    while (opcao != 0) {
        system("cls");
        printf("COMPUTADOR DE BORDO DO VEICULO");
        printf("\n\n");
        printf("MENU\n");
        printf("1 - CONSUMO\n");
        printf("2 - AUTONOMIA\n");
        printf("0 - SAIR\n");

        printf("\nDigite a opcao desejada: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            system("cls");
            printf("OPCAO DE CONSUMO DO VEICULO\n\n");

            printf("Nome do veiculo: ");
            scanf("%s", carro);

            printf("Digite a distancia percorrida (km): ");
            scanf("%f", &distancia);

            printf("Quanto gastou de combustivel (litros): ");
            scanf("%f", &litros);

            if (distancia > 0) {
                if (litros > 0) {
                    consumo = distancia / litros;
                    printf("\nO veiculo %s tem consumo de %.2f km/l\n", carro, consumo);
                } else {
                    printf("\nErro: litros deve ser maior que zero!\n");
                }
            } else {
                printf("\nErro: distancia deve ser maior que zero!\n");
            }

            printf("\nPressione qualquer tecla para continuar...");
            getch();

        } else if (opcao == 2) {
            system("cls");
            printf("OPCAO DE AUTONOMIA DO VEICULO\n\n");

            printf("Digite quantos litros tem no tanque: ");
            scanf("%f", &litros);

            printf("Quanto km o veiculo faz por litro: ");
            scanf("%f", &km);

            if (litros > 0) {
                if (km > 0) {
                    autonomia = litros * km;
                    printf("\nO veiculo tem autonomia de %.2f km\n", autonomia);
                } else {
                    printf("\nErro: km por litro deve ser maior que zero!\n");
                }
            } else {
                printf("\nErro: litros deve ser maior que zero!\n");
            }

            printf("\nPressione qualquer tecla para continuar...");
            getch();

        } else if (opcao == 0) {
            system("cls");
            printf("Sistema finalizado... Obrigado por usar nosso sistema!\n");
        } else {
            printf("\nOpcao invalida!\n");
            printf("\nPressione qualquer tecla para continuar...");
            getch();
        }
    } /* while */

    return 0;
} /* main */
