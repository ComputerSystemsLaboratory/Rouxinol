#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m; cin>>n;
  string u[n];
  for(int i=0;i<n;++i) cin>>u[i];
  cin>>m;
  bool o=false;
  for(int i=0;i<m;++i){
    string t; cin>>t;
    bool flag=false;
    for(int j=0;j<n;++j)
      if(t==u[j]){
        flag=true;
        if(o) o=false;
        else o=true;
      }
    if(flag)
      if(o) cout<<"Opened by "<<t<<endl;
      else cout<<"Closed by "<<t<<endl;
    else cout<<"Unknown "<<t<<endl;
  }
  return 0;
}