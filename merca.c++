#include <iostream>
using namespace std;

int main() {
    float a;

    cout << "Ingrese el valor del producto: ";
    cin >> a;

    float descuento = a * 0.15;

    cout << "El producto vale " << a << " y con el descuento es: " << a - descuento << endl;

    return 0;
}
