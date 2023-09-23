#include <bits/stdc++.h>
using namespace std;

int dfs(int x,int y);

int main(){
  int x,y;
  cin >> x >> y;
  if(x < y){
    swap(x,y);
  }
  cout << dfs(x,y) << endl;
  return 0;
}

int dfs(int x,int y){
  if(!y)return x;
  return(dfs(y,x % y));
}