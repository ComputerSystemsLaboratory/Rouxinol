#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.14159265358979323846;

int main(){
  int a,b;
  char op;
  while(true){
    cin >> a >> op >> b;
    switch(op){
      case '+': cout << a+b << endl; break;
      case '-': cout << a-b << endl; break;
      case '*': cout << a*b << endl; break;
      case '/': cout << a/b << endl; break;
    }
    if(op=='?') break;
  }

  return 0;
}