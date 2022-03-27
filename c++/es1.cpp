#include <iostream> 
#include <time.h> 
#include <cstdlib> 
using namespace std; 
int main(){ 
  
int dado1, dado2, dado3, dado4, punti=0, cont=0;  
srand(time(NULL)); 
 
do{ cont++;
 dado1 = rand() % 6 + 1; 
 dado2 = rand() % 6 + 1; 
 dado3 = rand() % 6 + 1; 
 dado4 = rand() % 6 + 1; 
  
 cout << dado1 << "-" << dado2 << "-" << dado3 << "-" << dado4 << endl; 
 
 if (dado1 == 1){ 
  punti = punti - 2; 
 } 
 if (dado2 == 1){ 
  punti = punti - 2;  
 } 
 if (dado3 == 1){ 
  punti = punti - 2; 
 } 
 if (dado4 == 1){ 
  punti = punti - 2; 
 } 
  
 if (dado1 == dado2 && dado1 !=1 && dado2 != 1){ 
  punti++; 
 } 
 if (dado1 == dado3 && dado1 !=1 && dado3 != 1){ 
  punti++; 
 } 
 if (dado1 == dado4 && dado1 !=1 && dado4 != 1){ 
  punti++; 
 } 
  
 if (dado2 == dado3 && dado3 !=1 && dado2 != 1){ 
  punti++; 
 } 
 if (dado2 == dado4 && dado2 !=1 && dado4 != 1){ 
  punti++;
 } 
  
 if (dado3 == dado4 && dado3 !=1 && dado4 != 1){ 
  punti++; 
 } 
  
 if (dado1 == dado2  && dado2 == dado3 && dado1 !=1 && dado2 != 1 && dado3 !=1){ 
  punti+=2; 
 } 
 if (dado1 == dado2 && dado2 == dado4 && dado1 != 1 && dado2 != 1 && dado4 != 1){ 
  punti+=2; 
 } 
 if (dado1 == dado3 && dado3 == dado4 && dado1 != 1 && dado3 != 1 && dado4 != 1){ 
  punti+=2; 
 } 
  
 if(dado2 == dado3 && dado4 == dado3 && dado2 != 1 && dado3 != 1 && dado4 != 1){ 
 punti+=2; 
 } 
 
 if(dado1 == dado2 && dado2 == dado3 && dado3 == dado4 && dado1 != 1 && dado2 != 1 && dado3 != 1 && dado4 != 1){ 
 punti+= 10; 
 
 } 
 

cout << "LANCIO: " << cont << endl<< "PUNTI: "<< punti<< endl;
	
	}while(punti < 20);
	cout << "hai totalizzato " << punti << " punti." << " Hai vinto!\n";
	cout << "ci sono voluti " << cont -1 << " tentativi";
}


