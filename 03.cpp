#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	
	unsigned long long x, i, y;
	
	while (1) {
		cout << endl << "Enter a number: " << endl;
		cin >> x;
		
		for (i=2; i<x; i++) {
			y = x % i;
			if (y == 0){
				cout << x << " is not a prime number" << endl;
				break; 
				}
			}
		// If y = 0, then x is not a prime number.
		// Else x is prime number.
		if (y != 0) {
			cout << x << " is prime number." << endl;
		}
	}
	
	getch ();
	return (0);
}


/*
	:::03:::
	Checks if any number entered is prime.
*/
