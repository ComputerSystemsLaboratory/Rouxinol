#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y;
  int tmp;

  cin >> x >> y;

  while(x%y!=0){
      tmp = x % y;
      x = y;
      y = tmp;
    }

  cout << y << endl;

  return 0;
}