#include <iostream>

using namespace std;
main(){
	setlocale (LC_ALL, "Portuguese");
	int num;
	long long fatorial = 1;
	cout << "Digite um n�mero inteiro: ";
	cin >> num;
	
	for(int i = 1; i <= num; i ++){
		fatorial *=i;
		cout << "O fatorial de " << num << "�: "<< fatorial << endl;
		
	}
	return 0;
}

