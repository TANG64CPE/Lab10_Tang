#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double initial,rate,pay,x = 1,y,z;
	cout << "Enter initial loan: ";
	cin >> initial;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for (int i=1;i <= 20 ;i++){
		if ( i == 1 ){
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i; 
			cout << setw(13) << left << initial;
			cout << setw(13) << left << (initial * rate)/100; y = (initial * rate)/100;
			cout << setw(13) << left << initial + y; z = initial + y;
			if (initial + y < pay){
				cout << setw(13) << left << initial + y;
				cout << setw(13) << left << 0;
				cout << "\n";	
				break;
			}
			cout << setw(13) << left << pay;
			cout << setw(13) << left << z - pay; x = z - pay;
			cout << "\n";	
		}
		else{
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i; 
			cout << setw(13) << left << x;
			cout << setw(13) << left << (x * rate)/100; y = (x * rate)/100;
			cout << setw(13) << left << x + y; z = x + y;
			if ( z < pay ){
				cout << setw(13) << left << z;
				cout << setw(13) << left << 0;
				break;
			}else{
				cout << setw(13) << left << pay;
				cout << setw(13) << left << z - pay; x = z - pay;
			}
			cout << "\n";	
		}
	}
	return 0;
}
