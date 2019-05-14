#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// Clear console.
void clear() {
    cout << string( 100, '\n' );
}

// Wait until press Enter key.
void wait() {
  cout << "Press Enter to continue...";
  getchar();
}

class Todo {
  public:
    void addTodo();
    void listTodos();
    void deleteTodo();
    int getCount();
};

void Todo::addTodo() {
  string todo;
  int count = 1;

  cout << "Enter your todo:";
  cin.ignore();
  getline(cin, todo);

  ofstream todos;
  todos.open ("todos.txt", ofstream::app | ofstream::out);

  count = getCount() + 1;
  todos << count << "- ";

  for (size_t i = 0; todo[i] != '\0'; i++) {
    todos << todo[i];
  }

  todos << "\n";
  todos.close();
}

int Todo::getCount() {
  int num;
  bool oneLine = true;
  ifstream countFile;
  countFile.open("todos.txt",  std::ios_base::ate);

  if (countFile.is_open()) {
    int length = countFile.tellg(); //Get file size
    // If nothing in the file then return 0.
    if (length <= 1) {
      return 0;
    }
    // loop backward over the file to get todos num.
    char ch;
    for(int i = length-3; i > 0; i--){
      countFile.seekg(i);
      ch = countFile.get();
      if(ch == '\n'){
        oneLine = false;
        break;
      }
    }
    // If new line character nor occured then return 1.
    if (oneLine) {
      return 1;
    }
    // Get num of the last line.
    countFile >> num;
    countFile.close();
  }
  return num;
}

void Todo::listTodos() {
  string line;
  ifstream listFile;
  listFile.open("todos.txt");

  if (listFile.is_open()) {
    while (!listFile.eof()) {
      getline(listFile, line);
      cout << line << "\n";
    }
  }
}

void Todo::deleteTodo() {
  
}

int main () {
  Todo todo;
  char choise;

  while (1) {
    todo.getCount();
    cout << "Select operation:" << "\n";
    cout << "1 - Add Todo" << "\n";
    cout << "2 - List Todos" << "\n";
    cout << "3 - Delete Todo" << "\n";
    cout << "4 - Exit" << "\n";
    cin >> choise;

    switch (choise) {
      case '1':
        todo.addTodo();
        break;
      case '2':
        todo.listTodos();
        break;
      case '3':

        break;
      case '4':
        return (0);
    }
  }
	return (0);
}

/*
	:::06:::
  Simple TODO program.
*/
