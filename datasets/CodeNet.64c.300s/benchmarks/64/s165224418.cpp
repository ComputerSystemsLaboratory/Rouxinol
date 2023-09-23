#include<iostream>
using namespace std;

int main(){
  int x, y, t;
  cin >> x >> y;
  if (x < y) {
    t = x;
    x = y;
    y = t;
  }
  while(y) {
    y = x % (t = y);
    x = t;
  }
  cout << x << endl;
  return 0;
}