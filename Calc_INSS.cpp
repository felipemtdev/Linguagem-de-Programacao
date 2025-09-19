#include <stdio.h>

/**
 * Calcula o valor da contribuição ao INSS (Instituto Nacional do Seguro Social)
 * com base no salário bruto informado, de acordo com as faixas de alíquotas vigentes.
 *
 * As faixas utilizadas são:
 * - De 1,00 até 1.518,00 ? 7,5%
 * - De 1.518,01 até 2.793,88 ? 9%
 * - De 2.793,89 até 4.190,83 ? 12%
 * - De 4.190,84 até 8.157,41 ? 14%
 * - Acima de 8.157,41 ? valor fixo de 1.142,04
 *
 * Se o salário bruto for menor ou igual a 0, a função retorna -1 como indicador de erro.
 *
 * @param salario_bruto valor do salário bruto do trabalhador.
 * @return valor da contribuição do INSS correspondente ao salário informado.
 *         Retorna -1 se o salário bruto for menor ou igual a zero.
 */
float inss(float salario_bruto) {
    if (salario_bruto <= 0) {
        return -1; // Indicador de erro
    } else if (salario_bruto <= 1518.00) {
        return salario_bruto * 0.075;
    } else if (salario_bruto <= 2793.88) {
        return salario_bruto * 0.09;
    } else if (salario_bruto <= 4190.83) {
        return salario_bruto * 0.12;
    } else if (salario_bruto <= 8157.41) {
        return salario_bruto * 0.14;
    } else {
        return 1142.04; // Valor fixo para salários acima do teto
    }
}

int main() {
    float salario;
    printf("Digite o salario bruto: ");
    scanf("%f", &salario);

    float contribuicao = inss(salario);

    if (contribuicao == -1) {
        printf("Erro: salario invalido.\n");
    } else {
        printf("Contribuicao INSS: R$ %.2f\n", contribuicao);
    }

    return 0;
}

