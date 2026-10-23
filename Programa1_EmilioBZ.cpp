#include <iostream>
using namespace std;
//EBZ 
int main() {
    int a, b, c;

    cout << "Ingresa el valor del lado a: ";
    cin >> a;
    cout << "Ingresa el valor del lado b: ";
    cin >> b;
    cout << "Ingresa el valor del lado c: ";
    cin >> c;

    if (a > 0 && b == 0 && c == 0) {
        cout << "La figura es un circulo\n";
    } 
    else if (a > 0 && b > 0 && c == 0 && a == b) {
        cout << "La figura es un cuadrado\n";
    } 
    else if (a > 0 && b > 0 && c == 0 && a != b) {
        cout << "La figura es un rectangulo\n";
    } 
    else if (a > 0 && b > 0 && c > 0) {
        if (a == b && b == c) {
            cout << "La figura es un triangulo equilatero\n";
        } 
        else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
            cout << "La figura es un triangulo isosceles\n";
        } 
        else {
            cout << "La figura es un triangulo escaleno\n";
        }
    } 
    else {
        cout << "Los valores no indican figura.\n";
    }

    return 0;
}