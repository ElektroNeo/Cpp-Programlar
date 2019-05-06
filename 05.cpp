#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

// Clear console
void clear(char fill = ' ') {
    COORD tl = {0,0};
    CONSOLE_SCREEN_BUFFER_INFO s;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(console, &s);
    DWORD written, cells = s.dwSize.X * s.dwSize.Y;
    FillConsoleOutputCharacter(console, fill, cells, tl, &written);
    FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
    SetConsoleCursorPosition(console, tl);
}

class Calculator
{
public:
  int x, y;
  long int result;
  long int hist[10];

  void Init() {
    cout << "!!! Basic Calculator !!!" << '\n';
    for (size_t i = 0; i < 10; i++) {
      hist[i] = 0;
    }
  }
  void updateHist() {
    for (size_t i = 0; i < 10; i++) {
      hist[i] = hist[i+1];
    }
  }
  int Add() {
    updateHist();
    hist[9] = x+y;
    return x+y;
  }
  int Sub() {
    updateHist();
    hist[9] = x-y;
    return x-y;
  }
  int Mult() {
    updateHist();
    hist[9] = x*y;
    return x*y;
  }
  int Div() {
    updateHist();
    hist[9] = x/y;
    return x/y;
  }
  int Pow() {
    result = 1;
    for (long int i = 0; i < y; i++) {
      result *= x;
    }
    updateHist();
    hist[9] = result;
    return result;
  }
  int Fact() {
    result = 1;
    for (int i = 2; i <= x; i++) {
      result *= i;
    }
    updateHist();
    hist[9] = result;
    return result;
  }
  void history() {
    for (size_t i = 0; i < 10; i++) {
      cout << i+1 << ". " << hist[i] << endl;
    }
  }
};

class Colors
{
public:
  void foreground(int color) {
    HANDLE hConsole;
    hConsole = GetStdHandle (STD_OUTPUT_HANDLE);
    switch (color) {
      case 1:
        SetConsoleTextAttribute
        (hConsole, FOREGROUND_RED);
        break;
      case 2:
        SetConsoleTextAttribute
        (hConsole, FOREGROUND_GREEN);
        break;
      case 3:
        SetConsoleTextAttribute
        (hConsole, FOREGROUND_BLUE);
        break;
      case 4:
        SetConsoleTextAttribute
        (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        break;
      case 5:
        SetConsoleTextAttribute
        (hConsole, FOREGROUND_GREEN  | FOREGROUND_INTENSITY);
        break;
      case 6:
        SetConsoleTextAttribute
        (hConsole, FOREGROUND_BLUE  | FOREGROUND_INTENSITY);
        break;
      default:
        cout << "Wrong color code" << endl;
    }
  }
};

int main () {
  // For color changing.


  Calculator c;
  Colors color;

  int choise;

  c.Init();

  while (1) {
    color.foreground(1);
    cout << "Select operation:" << "\n";
    color.foreground(2);
    cout << "1 - Addition:" << "\n";
    cout << "2 - Subtraction" << "\n";
    cout << "3 - Multiplication" << "\n";
    cout << "4 - Division" << "\n";
    cout << "5 - Power" << "\n";
    cout << "6 - Factorial" << "\n";
    color.foreground(4);
    cout << "7 - History" << "\n";
    color.foreground(3);
    cout << "8 - Exit" << "\n";
    color.foreground(6);
    cin >> choise;
    color.foreground(2);
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

    color.foreground(1);
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
        c.history();
        break;
      case 8:
        cout << "--- Basic Calculator ---";
        return(0);
      default:
        cout << "Wrong choise try again!";
        break;
    }
    cout << "Press enter to continue...";
    getch();
    clear();
  }

	getch ();
	return (0);
}

/*
	:::05:::
  Simple calculator.
*/
