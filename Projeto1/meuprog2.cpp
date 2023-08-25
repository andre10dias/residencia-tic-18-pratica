#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int num1, num2;

    cout << "Informe um número inteiro: ";
    cin >> num1;

    cout << "Informe outro número inteiro: ";
    cin >> num2;

    cout << endl;

    cout << "Soma = " << num1 + num2;
    cout << endl;
    cout << "Subtração = " << num1 - num2;
    cout << endl;
    cout << "Multiplicação = " << num1 * num2;
    cout << endl;
    cout << "Divisão = " << num1 / num2;
    cout << endl;
    cout << "Resto = " << num1 % num2;

    cout << endl;
    return 0; 
}