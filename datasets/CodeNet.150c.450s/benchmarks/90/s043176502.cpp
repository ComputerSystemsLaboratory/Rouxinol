#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  map<int, int> p;
  int mx=0;
  while(cin>>n){
    mx=max(mx,++p[n]);
  }
  for(auto i:p)
    if(mx==i.second) cout<<i.first<<endl;
  return 0;
}

