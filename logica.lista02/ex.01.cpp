#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, qnt;
	qnt = 0;
	printf ("\nDivisores de um numero qualquer. \n\n");     
	scanf("%d", &num);
	 printf("\n D(%d): ", num);
	
	for(int i = 1; i <= num; ++i){
		if (num % i == 0){
			 printf(" %d ", i);
			qnt++;
		}
		printf( "\n\n Numero de divisores: %d\n\n", qnt);
		return 0;
    }
    
}
	

