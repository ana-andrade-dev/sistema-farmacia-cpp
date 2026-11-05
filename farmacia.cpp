/* Ana Carolina Dias de Andrade
AEDS I */

#include <iostream>
using namespace std;

int main() {
    double faturamentoDia = 0;
    char novaVenda = 's';

    while (novaVenda == 's' || novaVenda == 'S') {
        char nome[50];
        double preco;
        double subtotal = 0;
        double total;
        char controlado;
        char receita;
        char idoso;

        cout << endl << "=== NOVA VENDA ===" << endl;
        cout << "Cliente idoso ou com convenio? (s/n): ";
        cin >> idoso;

        cout << endl << "--------- RECIBO ---------" << endl;
        cout << "Medicamento (ou FIM para encerrar): ";
        cin >> nome;

        while ((nome[0] != 'F' || nome[1] != 'I' || nome[2] != 'M' ) &&
                (nome[0] != 'f' || nome[1] != 'i' || nome[2] != 'm' )) {
            cout << "Preco: R$ ";
            cin >> preco;

            cout << "E controlado? (s/n): ";
            cin >> controlado;

            receita = 's';

            if (controlado == 's' || controlado == 'S') {
                cout << "Cliente apresentou receita? (s/n): ";
                cin >> receita;
            }

            if (receita == 's' || receita == 'S') {
                subtotal = subtotal + preco;
                cout << nome << "  R$ " << preco << endl;
            } else {
                cout << nome << "  NAO VENDIDO (sem receita)" << endl;
            }

            cout << "Medicamento (ou FIM para encerrar): ";
            cin >> nome;
        }

        total = subtotal;

        cout << "---------------------------" << endl;

        if (idoso == 's' || idoso == 'S') {
            total = subtotal * 0.85;
            cout << "Desconto aplicado: 15%" << endl;
        }

        cout << "TOTAL: R$ " << total << endl;

        faturamentoDia = faturamentoDia + total;

        cout << "Registrar nova venda? (s/n): ";
        cin >> novaVenda;
    }

    cout << endl << "FATURAMENTO TOTAL DO DIA: R$ "
         << faturamentoDia << endl;

    return 0;
}
