#include <iostream>
using namespace std;
int main(){
	float num1, num2;
	int oper;

cout << "dammi il primo numero\n";
cin >> num1;
cout << "dammi il secondo numero\n";
cin >> num2;
do{
cout << "quale operazione vuoi eseguire? 1= sottrazione | 2= addizione | 3= divisione | 4= moltiplicazione\n";
cin >> oper;
}while(oper < 1 || oper > 4);

switch (oper){
	case 1:
		cout << num1 << " - " << num2 << " = " << num1 - num2;
	break;
		
	case 2:
		cout << num1 << " + " << num2 << " = " << num1 + num2;
	break;
		
	case 3:
		if(num1 == 0 && num2 == 0){
			cout << "indeterminato";
			
		}else if(num2 == 0){
			cout << "impossibile";
		
		}else{
			cout << num1 << " / " << num2 << " = " << num1 / num2;
		}
	break;
	
	case 4:
		cout << num1 << " * " << num2 << " = " << num1 * num2;
	break;
		
}
	
}
