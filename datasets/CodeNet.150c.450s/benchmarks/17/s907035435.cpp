//Sorting Five Numbers
#include<bits/stdc++.h>
using namespace std;

int v[5];

int main(){
  cin>>v[0]>>v[1]>>v[2]>>v[3]>>v[4];
  sort(v, v+5, greater<int>());
  for(int i=0; i<5; i++){
    cout<<v[i];
    if(i!=4) cout<<' ';
    else cout<<'\n';
  }
  return 0;
}