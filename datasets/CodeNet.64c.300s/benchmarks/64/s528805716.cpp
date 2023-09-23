#include <iostream>

using namespace std;

int main(){
  int a, b, tmp;

  cin >> a >> b;

  while(a!=0 && b!=0){
    if(a < b)
      swap(a,b);
    tmp = a;
    a = b;
    b = tmp%b;
  }
  cout << a << endl;

  return 0;
}