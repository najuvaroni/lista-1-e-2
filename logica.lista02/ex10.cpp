#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int  num, nmaximo;
	
	cout << "Informe o número desejado:";
	cin >> num;
	cout << "Informe o número máximo:";
	cin >> nmaximo;
		
	 for( int i=1; i<=nmaximo ; i++)
            cout<<num<<" * "<<i<<" = " << num*i<<endl;
            
        cout<<endl;

}
