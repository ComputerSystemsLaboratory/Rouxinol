#include <iostream>
using namespace std;
int main(void){
  int a,b;
  while(cin >> a >> b){
    int c=0;
    a+=b;
    while(a>0){
      a/=10;
      c++;
    }
    cout << c <<endl;
  }
  return 0;
}