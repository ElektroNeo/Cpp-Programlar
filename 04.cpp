#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main () {
	
	unsigned long long x, i, y, z, prime, a[200000], counter=0, sum=0;
	
	while (1) {
		cout << endl << "Number of prime numbers: " << endl;
		cin >> x;
		
		for (i=2; i<x; i++) {
			for (y=2; y<i; y++) {
				z = i % y;
				if (z == 0) {
					goto label;
				}
			}
			a[counter] = y;
			cout << y << "\t" << counter+1 << endl;
			counter++;
label:
		}
		
		int choise;
		
		cout << "Write prime numbers to file?\n "
		<< "1 -> Yes, 2 -> No : ";
		cin >> choise;
		
		if (choise == 1) {
			ofstream myfile;
			myfile.open ("prime_numbers.txt", ios::trunc);
			for (int i = 0; i<counter; i++) {
		
				myfile << i+1 << ". " << a[i] << endl;
				
			}
			myfile.close();
		}
		else if (choise == 2) {
			break;
		}
		else {
			cout << "Wrong choise. Try again!" << endl;
			goto label;
		}
	}
	
	getch ();
	return (0);
}

/*
	:::04:::
	Find the prime numbers up to an entered number and if desired
	writes prime numbers found in prime_numbers.txt.

*/
