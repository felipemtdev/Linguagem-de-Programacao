#include <iostream>
using namespace std;

float aplicar_desconto(float valor_compra, float percentual) {
    // Regra 1
    if (valor_compra <= 0) {
        return -999;
    }

    // Regra 2
    if (percentual <= 0 || percentual > 20) {
        return -998;
    }

    // Cálculo do desconto
    float valor_final = valor_compra - (valor_compra * percentual / 100);
    return valor_final;
}

int main() {
    float compra, desconto;

    cout << "Digite o valor da compra: ";
    cin >> compra;

    cout << "Digite o percentual de desconto: ";
    cin >> desconto;

    float resultado = aplicar_desconto(compra, desconto);

    if (resultado == -999) {
        cout << "Erro: valor da compra deve ser maior que 0" << endl;
    } else if (resultado == -998) {
        cout << "Erro: percentual deve ser maior que 0 e menor ou igual a 20" << endl;
    } else {
        cout << "Valor final com desconto: " << resultado << endl;
    }

    return 0;
}