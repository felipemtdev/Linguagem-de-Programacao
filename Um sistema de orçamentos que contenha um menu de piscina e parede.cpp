#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  // para getch()

int main() {
    int opcao = 1;

    while(opcao != 0) {
        system("cls");
        printf("SISTEMA DE ORCAMENTOS\n");
        printf("---------------------\n\n");
        printf("MENU\n");
        printf("1 - Orçamento para construir a piscina\n");
        printf("2 - Orçamento para construir a parede\n");
        printf("0 - Sair\n\n");

        printf("Digite a opcao desejada: ");
        scanf("%i", &opcao);

        if(opcao == 1) {
            system("cls");
            printf("ORCAMENTO PARA CONSTRUIR PISCINA\n");
            printf("--------------------------------\n\n");

            float compr, larg, prof, m3, preco_m3, total;

            printf("Digite o comprimento da piscina : ");
            scanf("%f", &compr);

            printf("Digite a largura da piscina : ");
            scanf("%f", &larg);

            printf("Digite a profundidade da piscina : ");
            scanf("%f", &prof);

            printf("Digite o preco por metro cubico : ");
            scanf("%f", &preco_m3);

            if(compr > 6 && larg > 3 && prof > 1 && preco_m3 > 0) {
                m3 = compr * larg * prof;
                total = m3 * preco_m3;

                printf("\nVolume da piscina (m³): %.2f\n", m3);
                printf("Total a pagar: R$ %.2f\n", total);
            } else {
                printf("\nNao foi possivel calcular! Verifique os valores inseridos.\n");
            }

            printf("\nClique para continuar...");
            getch();

        } else if(opcao == 2) {
            system("cls");
            printf("ORCAMENTO PARA CONSTRUIR PAREDE\n");
            printf("--------------------------------\n\n");

            float compParede, largParede;
            float altTijolo, largTijolo;
            float precoTijolo, maoObra;

            printf("Digite o comprimento da parede : ");
            scanf("%f", &compParede);

            printf("Digite a largura da parede : ");
            scanf("%f", &largParede);

            printf("Digite a altura do tijolo : ");
            scanf("%f", &altTijolo);

            printf("Digite a largura do tijolo : ");
            scanf("%f", &largTijolo);

            printf("Digite o preco de cada tijolo : ");
            scanf("%f", &precoTijolo);

            printf("Digite o valor da mao de obra : ");
            scanf("%f", &maoObra);

            float areaParede = compParede * largParede;
            float areaTijolo = altTijolo * largTijolo;
            float qtdTijolos = areaParede / areaTijolo;
            float valorTijolos = qtdTijolos * precoTijolo;
            float valorTotal = valorTijolos + maoObra;

            printf("\n------------------------------\n");
            printf("m2 da parede: %.2f\n", areaParede);
            printf("m2 do tijolo: %.4f\n", areaTijolo);
            printf("Quantidade de tijolos: %.2f\n", qtdTijolos);
            printf("Valor dos tijolos: R$ %.2f\n", valorTijolos);
            printf("Valor total a pagar pela parede: R$ %.2f\n", valorTotal);
            printf("------------------------------\n");

            printf("\nClique para continuar...");
            getch();

        } else if(opcao == 0) {
            system("cls");
            printf("Sistema finalizado... obrigado por usar!\n");

        } else {
            printf("\n\nOpcao invalida... clique para continuar");
            getch();
        }
    }

    return 0;
}
