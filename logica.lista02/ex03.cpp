#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, is_primo;
	
	cout << "digite um número inteiro";
	cin >> num;
	
	cout << "numeros primos menores ou iguais a : " << num << endl;
	
	for(int i = 2; i <= num; i ++){
		bool is_primo = true;
	}
	
	for(int i = 2; i <= num; i++){
		if ( i % num == 0){
			is_primo = false;
			break;
		}
	} 
}
	
	

