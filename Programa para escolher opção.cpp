#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  // para getch()

int main() {
    int opcao = 1;

    while (opcao != 0) {
        system("cls");
        printf("TITULO DO SISTEMA\n\n");
        printf("MENU\n");
        printf("1 - opcao 1\n");
        printf("2 - opcao 2\n");
        printf("3 - opcao 3\n");
        printf("0 - Sair\n\n");

        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("cls");
                printf("TITULO DA OPCAO 1\n\n");
                // código da opção 1
                printf("\nClique para continuar");
                getch();
                break;

            case 2:
                system("cls");
                printf("TITULO DA OPCAO 2\n\n");
                // código da opção 2
                printf("\nClique para continuar");
                getch();
                break;

            case 3:
                system("cls");
                printf("TITULO DA OPCAO 3\n\n");
                // código da opção 3
                printf("\nClique para continuar");
                getch();
                break;

            case 0:
                system("cls");
                printf("Sistema finalizado... obrigado por usar\n");
                break;

            default:
                printf("\nOpcao invalida... clique para continuar");
                getch();
        }
    }

    return 0;
}
