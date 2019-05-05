#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main () {

	unsigned long long x, i, y, z, a[200000], counter=0, sum=0;

	while (1) {
		cout << endl << "Up to what number? " << endl;
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
label:;
		}

		int choise;

		cout << "Write prime numbers to file?\n "
		<< "1 -> Yes, 2 -> No, 3 -> Exit";
		cin >> choise;

		if (choise == 1) {
			ofstream myfile;
			myfile.open ("prime_numbers.txt", ios::trunc);
			for (i = 0; i<counter; i++) {

				myfile << i+1 << ". " << a[i] << endl;

			}
			myfile.close();
		}
		else if (choise == 2) {
			continue;
		}
		else if (choise == 3) {
			return(0);
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
