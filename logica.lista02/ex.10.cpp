#include <iostream>
using namespace std;

main(){
		setlocale (LC_ALL, "Portuguese");
	int num;
	cout << "Digite um n�mero inteiro : ";
	cin >> num;
	for (int i = 1; i < 100; i++){
		if (i % num == 0){
			cout << i << endl;
		}
	}
	return 0;
}
