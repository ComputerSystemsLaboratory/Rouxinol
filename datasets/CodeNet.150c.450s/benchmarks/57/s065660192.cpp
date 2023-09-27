#include <iostream>
#include <string>
using namespace std;

int main() {

  int x, y;
  char op;
  
  while(1){
    cin >> x >> op >> y;

    if(op == '?') break;
    switch(op) {
      case '+':
        cout << x + y << endl;
        break;
      case '-':
        cout << x - y << endl;
        break;
      case '*':
        cout << x * y << endl;
        break;
      case '/':
        cout << x / y << endl;
        break;
      default:
        break;
    }
  }

   return 0;
}  