#include <iostream>  
using namespace std;
int main(){
	int i, nvoti, voto, media=0, cont=0, alun=0, ins=0;
	do{
	alun++;	
	cout << "alunno numero " << alun << " quanti voti hai?" << endl;
	cin >> nvoti;
	cout << "inserisci i voti\n";
	for (i=0; i<nvoti; i++){
	 	cin >> voto;
	 	cont+=voto;
	 	if(voto < 6){
	 		ins++;
		 }
		
	 } 
	 media = cont / nvoti;
		cout << "la media dei voti e': " << media << endl;
		cout << "hai " << ins << " insufficienze/a\n";
    cout << "" << endl;
}while(alun < 10);
}
