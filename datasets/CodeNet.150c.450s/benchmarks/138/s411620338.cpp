#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y,r;
  scanf("%d %d",&x,&y);

  while(x % y != 0){
    r = x % y;
    x = y;
    y = r;
  }

  cout << y << endl;

  return 0;
}