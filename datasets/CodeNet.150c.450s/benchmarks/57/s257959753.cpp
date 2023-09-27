#include<iostream>
using namespace std;

int main(){
  for (int i=0;true;i++){
    int a,b;
    char op;
    cin >> a  >> op >> b;

    if(op == '?') break;
    else if (op == '+'){
      cout << a+b << endl;
    }
    else if (op == '-'){
      cout << a-b << endl;
    }
    else if (op == '*'){
      cout << a*b << endl;
    }
    else {
      cout << a/b << endl;
    }

  }

  return 0;
}