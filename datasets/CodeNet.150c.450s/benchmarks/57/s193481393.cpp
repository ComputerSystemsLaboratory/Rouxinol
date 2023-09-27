#include <iostream>
#include <string>
using namespace std;

int main(){
  int a,b;
  string op;
  while(cin >> a >> op >> b && op!="?"){
    if(op=="+")cout << a+b << endl;
    if(op=="-")cout << a-b << endl;
    if(op=="*")cout << a*b << endl;
    if(op=="/")cout << a/b << endl;
  }

  return 0;

  
}