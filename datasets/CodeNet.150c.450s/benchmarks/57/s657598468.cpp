#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string op;
  int a, b;
  
  while(1){
    cin >> a >> op >> b;
    if(op == "?"){
      break;
    }
    if(op == "+"){
      cout << a + b << endl;
    }else if(op == "-"){
      cout << a - b << endl;
    }else if (op == "*"){
      cout << a * b << endl;
    }else{
      cout << a / b << endl;
    }
  }
  return 0;
}
