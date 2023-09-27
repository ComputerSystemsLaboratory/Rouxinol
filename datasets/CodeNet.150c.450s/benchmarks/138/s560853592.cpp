#include <bits/stdc++.h>
using namespace std;
int main(){
  int x,y;
  cin >> x >> y;
  if(x < y){
    swap(x,y);
  }
  while(y){
    int temp = y;
    y = x % y;
    x = temp;
  }
  cout << x << endl;
  return 0;
}