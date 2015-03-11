#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	
	unsigned long long a, b;
	
	a = 1000000000;
	
	b = (a*(a+1))/2;
	
	cout<<b;
	
	return(0);
}

/*
	:::02:::
	1'den 1000000000'a kadar olan say�lar� matematiksel form�lle toplam�n� bulmak:
	1'den n'e kadar olan say�lar�n toplam�n� bulmak i�in n*(n+1)/2 form�l�n� kullan�r�z.
	Bu programda da bu kullan�ld�. Bunu yapmam�z�n amac� program�n h�zl� �al��mas� i�indir.
	01 program�da ayn� i�lemi yap�yor fakat daha fazla s�rede bunu yapabiliyor. Bu 
	anlamda matematiksel form�lleri kullanmak i�imizi h�zland�r�yor.
*/
