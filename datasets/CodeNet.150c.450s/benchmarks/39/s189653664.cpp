#include<iostream>
using namespace std;

int main(void){

  int a,b,space,length;

  cin >> a >> b;

  space = a * b;
  length = 2 * (a + b);

  cout << space << " " << length << endl;

  return 0;

}