#include <iostream>  
#include <stdlib.h>     
#include <time.h>
using namespace std;
int main (){
srand(time(NULL));

	int comp1, comp2;

do{
	comp1 = rand() % 101;
	comp2 = rand() % 101;
		
	cout << "compratore numero uno: " << comp1 << endl << "compratore numero due: " << comp2 << endl;
}
while(comp1 != 0 && comp2 != 0);

	if (comp1 == 0){
			cout << "il compratore numero uno si e' ritirato. il compratore numero due si aggiundica l'oggetto in vendita";
	}
	if (comp2 == 0){
			cout << "il compratore numero due si e' ritirato. il compratore numero uno si aggiundica l'oggetto in vendita";
	}
}
