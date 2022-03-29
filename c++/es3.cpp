#include <iostream>
using namespace std;
int main () {
	
int imppin, pin;

cout << "imposta il pin di 4 cifre\n";
cin >> imppin;
do{
cout << "inserisci il pin\n";
cin >> pin;
if(imppin == pin){
	cout << "telefono sbloccato\n";
}
else if(imppin != pin){
	cout << "il pin e' sbagliato\n";
}
}
while (imppin != pin);

}
