#include <iostream>  
#include <stdlib.h>     
#include <time.h>
using namespace std;
int main () {
	
int num1, num2;
srand(time(NULL));
num1 = rand() % 100 + 1;

do {	
	cout << "indovina il numero generato\n";
	cin >> num2;
	if(num2 < num1){
		cout << "il numero e' troppo piccolo.\n";
	}
	if(num2 > num1){
		cout << "il numero e' troppo alto.\n";
	}
}while (num2 != num1);

cout << num2 << ": hai indovinato il nuemero!";
}

