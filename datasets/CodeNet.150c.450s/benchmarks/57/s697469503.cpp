#include<iostream>
using namespace std;

int main(void){
  int a, b;
  char op = '0';

  while(op != '?'){
    cin >> a >> op >> b;

    if( op == '+'){
      cout << a + b << endl;
    }else if( op == '-'){
      cout << a - b << endl;
    }else if( op == '*'){
      cout << a * b << endl;
    }else if( op == '/'){
      cout << a / b << endl;
    }
  }
  
  return 0;
}