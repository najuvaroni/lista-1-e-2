#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, soma, digito;
	
	cout << "Informe um número: ";
	cin >> num;
	
	while(num > 0){
		digito = num % 10;
		soma = soma + digito;
		num = num / 10;
	}
	
	cout << "A soma será : " << soma << endl;
}
