#include <iostream>
#include <conio.h>

using namespace std;

void println(char *str) {
  cout << str << "\n";
}

class Calculator
{
public:
  int x, y;
  long int result;

  void Info() {
    cout << "!!! Basic Calculator !!!" << '\n';
  }
  int Add() {
    return x+y;
  }
  int Sub() {
    return x-y;
  }
  int Mult() {
    return x*y;
  }
  int Div() {
    return x/y;
  }
  int Pow() {
    result = 1;
    for (long int i = 0; i < y; i++) {
      result *= x;
    }
    return result;
  }
  int Fact() {
    result = 1;
    for (int i = 2; i <= x; i++) {
      result *= i;
    }
    return result;
  }
};

int main () {
  Calculator c;
  int choise;
  c.Info();

  while (1) {
    cout << "Select operation:" << "\n";
    cout << "1 - Addition:" << "\n";
    cout << "2 - Subtraction" << "\n";
    cout << "3 - Multiplication" << "\n";
    cout << "4 - Division" << "\n";
    cout << "5 - Power" << "\n";
    cout << "6 - Factorial" << "\n";
    cout << "7 - Exit" << "\n";
    cin >> choise;

    if (choise < 5 && choise > 0) {
      cout << "Enter first number: ";
      cin >> c.x;
      cout << "Enter second number: ";
      cin >> c.y;
    }
    else if (choise == 5) {
      cout << "Enter base: ";
      cin >> c.x;
      cout << "Enter exponent: ";
      cin >> c.y;
    }
    else if (choise == 6) {
      cout << "Number: ";
      cin >> c.x;
    }

    switch (choise) {
      case 1:
        cout << endl << "Result = " << c.Add() << endl;
        break;
      case 2:
        cout << endl << "Result = " << c.Sub() << endl;
        break;
      case 3:
        cout << endl << "Result = " << c.Mult() << endl;
        break;
      case 4:
        cout << endl << "Result = " << c.Div() << endl;
        break;
      case 5:
        cout << endl << "Result = " << c.Pow() << endl;
        break;
      case 6:
        cout << endl << "Result = " << c.Fact() << endl;
        break;
      case 7:
        cout << "--- Basic Calculator ---";
        return(0);
      default:
        cout << "Wrong choise try again!";
        break;
    }
  }

	getch ();
	return (0);
}

/*
  TODO
  - Add history.
  - Clear screen after calculation.
  - Add colors.
*/

/*
	:::05:::
  Simple calculator.
*/
