#include <iostream>
using namespace std;

int main() {
    int valor = 10;

    valor += 5;
    cout << "Valor despues de aumentar en 5: " << valor << endl;

    valor -= 3;
    cout << "Valor despues de reducir en 3: " << valor << endl;

    valor *= 2;
    cout << "Valor despues de multiplicar por 2: " << valor << endl;

    valor /= 4;
    cout << "Valor despues de dividir entre 4: " << valor << endl;

    return 0;
}
