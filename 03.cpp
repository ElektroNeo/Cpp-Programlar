#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	
	unsigned long long x, i, y;
	
	while (1) {
		cout << endl << "Bir sayi gir: " << endl;
		cin >> x;
		
		for (i=2; i<x; i++) {
			y = x % i;
			if (y == 0){
				cout << x << " bir asal sayi degildir." << endl;
				break; 
				}
			}
		// D�ng�den ��kan y 0 ise x asal say� olmaz, 0'dan farkl�
		// bir say� ise x asal say� olur.
		if (y != 0) {
			cout << x << " bir asal sayidir." << endl;
		}
	}
	
	getch ();
	return (0);
}


/*
	:::03:::
	Girilen herhangi bir say�n�n asal olup olmad���n� kontrol eder.
*/
