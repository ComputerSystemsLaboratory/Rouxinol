#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int x,y;
  cin>>x>>y;
  if(x<y) swap(x,y);
  while(x%y){
    int tmp=x%y;
    x=y;
    y=tmp;
  }
  cout<<y<<endl;
  return 0;
}