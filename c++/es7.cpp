#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n1, n2,n3, media, pari=0, dispari=0;
	cout << "dammi tre numeri\n";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	
	if (n1<0){
		n1=n1*-1;
	}
	
	if (n2<0){
		n2=n2*-1;
	}
	
	if (n3<0){
		n3=n3*-1;
	}
	
	media = (n1+n2+n3)/3;
	cout << "la media dei numeri e " << media << endl;
	
	if (n1%2==0){
		pari++;
	}
	else{
	dispari++;
	}
		if (n2%2==0){
		pari++;
	}
	else{
	dispari++;
	}
		if (n3%2==0){
		pari++;
	}
	else{
	dispari++;
	}
	
	cout << "ci sono " << pari << " numeri pari\n";
	cout << "ci sono " << dispari << " numeri dispari";
	
	
	

}


