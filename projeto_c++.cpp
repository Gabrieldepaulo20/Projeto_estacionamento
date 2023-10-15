#include <iostream>
using namespace std;

int main() {
    int vagasCarros;
    int vagasMotos;
    int vagasDisponiveisCarros;
    int vagasDisponiveisMotos;

    cout << "Digite vagas para carros: ";
    cin >> vagasCarros;
    cout << "Digite vagas para motos: ";
    cin >> vagasMotos;

    vagasDisponiveisCarros = vagasCarros;
    vagasDisponiveisMotos = vagasMotos;

    int opcao;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Entrada de veiculo\n";
        cout << "2. Saida de veiculo\n";
        cout << "3. Mostrar numero de vagas disponiveis\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            int tipoVeiculo;
            cout << "Qual o veiculo ?" "\n";
            cout << "para carro digite 1 :  ""\n";
            cout << "para moto digite 2  : " "\n\n";
            cin >> tipoVeiculo;

            if (tipoVeiculo == 1) {
                if (vagasDisponiveisCarros > 0) {
                    vagasDisponiveisCarros--;
                    cout << "\n" "Carro estacionado com sucesso. Vagas disponiveis para carros: "  << vagasDisponiveisCarros << std:: endl;
                }
                else
                {
                    cout << "O estacionamento para carros esta cheio." << "n";
                }

            }
            else if (tipoVeiculo == 2) {
                if (vagasDisponiveisMotos > 0) {
                    vagasDisponiveisMotos--;
                    cout << "Moto estacionada com sucesso. Vagas disponiveis para motos: " << vagasDisponiveisMotos << "n";
                }
                else {
                    cout << "O estacionamento para motos está cheio." << "n";
                }
            }
            else {
                cout << "Tipo de veiculo invalido." << "n";
            }
        }
        else if (opcao == 2) {
            int tipoVeiculo;
            cout << "Digite o tipo de veiculo a ser retirado (1 para carro, 2 para moto): ";
            cin >> tipoVeiculo;

            if (tipoVeiculo == 1) {
                if (vagasDisponiveisCarros < vagasCarros) {
                    vagasDisponiveisCarros++;
                    cout << "Carro retirado com sucesso. Vagas disponiveis para carros: " << vagasDisponiveisCarros << "n";
                }
                else {
                    cout << "Não tem carros estacionados." << "n";
                }
            }

            else if (tipoVeiculo == 2) {
                if (vagasDisponiveisMotos < vagasMotos) {
                    vagasDisponiveisMotos++;
                    cout << "Moto retirada com sucesso. Vagas disponiveis para motos: " << vagasDisponiveisMotos << "n";
                }
                else {
                    cout << "Nao ha motos estacionadas." << "n";
                }
            }
            else { cout << "Tipo de veiculo invalido." << "n"; }
        }
        else if (opcao == 3) {
            cout << "Vagas disponiveis para carros: " << vagasDisponiveisCarros << "n";
            cout << "Vagas disponiveis para motos: " << vagasDisponiveisMotos << "n";
        }
        else if (opcao == 4) {
        }
        else { cout << "Opcao invalida." << "n"; }
    }

    return 0;
}
