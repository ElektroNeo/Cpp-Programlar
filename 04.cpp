#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main () {
	
	unsigned long long x, i, y, z, asal, a[200000], sayac=0, toplam=0;
	
	while (1) {
		cout << endl << "Kaca kadar olan asal sayilar: " << endl;
		cin >> x;
		
		for (i=2; i<x; i++) {
			for (y=2; y<i; y++) {
				z = i % y;
				if (z == 0) {
					goto label;
				}
			}
			a[sayac] = y;
			cout << y << "\t" << sayac+1 << endl;
			sayac++;
label:;
		}
		
		int secim;
		
		cout << "Bulunan asal sayilar dosyaya yazilsin mi?\n "
		<< "1 -> Evet, 2 -> Hayir : ";
		cin >> secim;
		
		if (secim == 1) {
			ofstream myfile;
			myfile.open ("asal_sayi.txt", ios::trunc);
			for (int say = 0; say<sayac; say++) {
		
				myfile << say+1 << ". " << a[say] << endl;
				
			}
			myfile.close();
		}
		else if (secim == 2) {
			break;
		}
		else {
			cout << "Yanlis bir secim yaptiniz. Tekrar deneyin!" << endl;
			goto label;
		}
	}
	
	getch ();
	return (0);
}

/*
	:::04:::
	Girilen bir sayýya kadar olan asal sayýlarý buluyor ve istenirse 
	bulunan asal sayýlarý asal_sayi.txt dosyasýna yazýyor.
*/
