#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
    float num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    while (num > 0) {
        int digito = num % 10;
        soma += digito;
        num /= 10;
   }
    cout << "A soma dos dígitos do número é: " << soma << endl;
}
