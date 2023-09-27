#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int x,y;
  while(1){
  cin >> x >> y;
  if(x==0 && y==0) break;
  if(y<x) swap(x,y);
  cout << x << ' ' << y << endl;
  }
}