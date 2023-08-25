#include <iostream>
#include <math.h> 
#include <iomanip>

using namespace std;

/**
 * Biblioteca math.h 
 * 
 * É importada para utilização da função fmod, pois o 
 * operador mod (%) só pode ser utilizado em dados do 
 * tipo inteiro.
 * 
 * Biblioteca iomanip
 * 
 * Usada para limitar a quantidade de casas decimais através 
 * da instrução cout << fixed << setprecision(), porém o mesmo 
 * aproxima (arredonda) o resultado para mais.
 * 
*/

int main(void) {
    float num1, num2;

    cout << "Informe um número com ponto flutuante: ";
    cin >> num1;

    cout << "Informe outro número com ponto flutuante: ";
    cin >> num2;

    cout << endl;
    cout << fixed << setprecision(1);

    cout << "Soma = " << num1 + num2;
    cout << endl;
    cout << "Subtração = " << num1 - num2;
    cout << endl;
    cout << "Multiplicação = " << num1 * num2;
    cout << endl;
    cout << "Divisão = " << num1 / num2;
    cout << endl;
    cout << "Resto = " << fmod(num1, num2);

    cout << endl;
    return 0; 
}