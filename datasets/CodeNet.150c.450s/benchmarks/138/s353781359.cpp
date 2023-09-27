#include <bits/stdc++.h>
using namespace std;

int main(void){
  int x, y;
  cin >> x >> y;
  if(!(x >= y)) swap(x, y);

  while(!(x == 0 || y == 0)){
    x = x % y;
    swap(x, y);
  }

  cout << max(x, y) << endl;

  return 0;
}