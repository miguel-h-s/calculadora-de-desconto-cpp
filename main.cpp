#include<iostream>
using namespace std;

int main() {
    cout << "digite o nome do produto: " << endl;
    string nome;
    cin >> nome;

    cout << "digite o preço de " << nome << ":" << endl;
    double preco;
    cin >> preco;

    cout << "verficando se o numero é valido..." << endl;
    if (preco < 0) {
        cout << "numero negativo, invalido!" << endl;
        return 1;
    }

    cout << "digite o desconto de " << nome << ":" << endl;
    double desconto;
    cin >> desconto;
    
    cout << "verficando se o numero é valido..." << endl;
    if (desconto < 0) {
        cout << "numero negativo, invalido!" << endl;
        return 1;
    }
    cout << "passando  pela segunda validação..." << endl;
    if (desconto > preco) {
        cout << "desconto é maior que o preço do produto" << endl;
        return 1;
    }

    double total = preco - desconto;
    cout << "o preço total de " << nome << " é: " << total << endl;
    
    return 0;
}