#include<iostream>
using namespace std;

int main(void){

  int num1,num2;

  cin >> num1 >> num2;

  if(num1 > num2) cout << "a > b" << endl;
  else if(num1 < num2) cout << "a < b" << endl;
  else cout << "a == b" << endl;

  return 0;

}