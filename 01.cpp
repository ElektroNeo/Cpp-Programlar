#include <iostream>

using namespace std;

int main (){
	
	unsigned long long a, b=0;
	
	a = 1000000000;
	
	for(int i = 1;i<=a; i++){
		b = b+i;
	}
	
	cout<<b;
	
	return(0);
}

/*
	:::01:::
	1'den 1000000000'a kadar olan say�lar�n toplam�.
*/
