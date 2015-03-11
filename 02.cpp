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
	1'den 1000000000'a kadar olan sayýlarý matematiksel formülle toplamýný bulmak:
	1'den n'e kadar olan sayýlarýn toplamýný bulmak için n*(n+1)/2 formülünü kullanýrýz.
	Bu programda da bu kullanýldý. Bunu yapmamýzýn amacý programýn hýzlý çalýþmasý içindir.
	01 programýda ayný iþlemi yapýyor fakat daha fazla sürede bunu yapabiliyor. Bu 
	anlamda matematiksel formülleri kullanmak iþimizi hýzlandýrýyor.
*/
