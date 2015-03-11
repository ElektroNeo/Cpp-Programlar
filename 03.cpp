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
		// Döngüden çýkan y 0 ise x asal sayý olmaz, 0'dan farklý
		// bir sayý ise x asal sayý olur.
		if (y != 0) {
			cout << x << " bir asal sayidir." << endl;
		}
	}
	
	getch ();
	return (0);
}


/*
	:::03:::
	Girilen herhangi bir sayýnýn asal olup olmadýðýný kontrol eder.
*/
