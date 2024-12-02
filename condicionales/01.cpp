#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int unidades;

    cout << "Cantidad de Unidades: ";
    cin >> unidades;

    double precioUnitario = (unidades >= 1 && unidades <= 25) ? 27 : 
                            (unidades >= 26 && unidades <= 50) ? 25 : 23;
    double importeCompra = unidades * precioUnitario;
    double descuento = (unidades > 50) ? (importeCompra * 0.15) : (importeCompra * 0.05);
    double totalPagar = importeCompra - descuento;

    cout << fixed << setprecision(2);
    cout << "Importe de Compra: " << importeCompra << endl;
    cout << "Descuento: " << descuento << endl;
    cout << "Total a Pagar: " << totalPagar << endl;

    return 0;
}
