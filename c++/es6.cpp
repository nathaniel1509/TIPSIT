#include <iostream>  
using namespace std;
int main(){
	int base, alt, i;
	cout << "inserisci la base e l'altezza del rettangolo che vuoi costruire\n";
	cout << "base: \n";
	cin >> base;
	cout << "altezza: \n";
	cin >> alt;
	for(i=0; i<alt; i++){
		for(i=0; i<base; i++){
		cout << "*";
		}
	}
}
