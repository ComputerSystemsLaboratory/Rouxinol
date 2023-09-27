#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  int a, b;
  char op;
  cin >> a >> op >> b;
  while(op != '?'){
    if(op=='+'){
      cout << a + b << endl;
    }else if(op=='-'){
      cout << a - b << endl;
    }else if(op=='*'){
      cout << a * b << endl;
    }else if(op=='/'){
      cout << a / b << endl;
    }
    cin >> a >> op >> b;
  }

  return 0;
}