#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]){
  int a, b,imm;
  char op;
  for(;;){
    cin >> a >> op >> b;
    if(op == '?')break;
    switch(op){
    case '+':
      imm = a + b;
      cout << imm << endl;
      break;
    case '-':
      imm = a - b;
      cout << imm << endl;
      break;
    case '*':
      imm = a * b;
      cout << imm << endl;
      break;
    case '/':
      imm = a / b;
      cout << imm << endl;
      break;
    case '?':
      break;
    }
  }
  // cout << d << " " << r << " " << endl;
  return 0;
}