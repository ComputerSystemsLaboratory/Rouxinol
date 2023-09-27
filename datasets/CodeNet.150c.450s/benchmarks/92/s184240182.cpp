#include <iostream>
using namespace std;

int digits(int n){
  int res=0;
  while(n){
    n = n/10;
    res++;
  }
  return res;
}

int main(){
  int x,y;
  while(cin >> x >> y)
    cout << digits(x+y) << endl;
  return 0;
}