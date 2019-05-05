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
	Find the sum of numbers from 1 to 1000000000 with mathematical formulas:
	We use the formula n * (n + 1) / 2 to find the sum of the numbers from 1 to n.
	This was also used in this program. The purpose of this is to make the program run fast.
	01 is doing the same in the program but can do it in more time. This
	using mathematical formulas in the sense of our business is accelerating.
*/
