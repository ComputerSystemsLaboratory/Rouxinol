#include<iostream>
using namespace std;

int main(void){

  int num1,num2;
  char op;
  int ans;

  while(cin >> num1 >> op >> num2){
    if(op == '+') ans = num1 + num2;
    else if(op == '-') ans = num1 - num2;
    else if(op == '*') ans = num1 * num2;
    else if(op == '/') ans = num1 / num2;
    else break;
    cout << ans << endl;
  }
  return 0;
}