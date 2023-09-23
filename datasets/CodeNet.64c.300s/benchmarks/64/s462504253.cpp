#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y;
  cin >> x >> y;
  if(x == 0 || y == 0)cout << 0 << endl;
  else{
    while(x!=y){
      if(x>y)x -=y;
      else y-=x;
    }
  }
  cout << x << endl;
}