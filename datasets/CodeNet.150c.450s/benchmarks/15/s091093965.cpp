#include<bits/stdc++.h>
using namespace std;

map<int,bool>check;

int main(){
  int n,m,ans=0;
  cin>>n;
  for(int i=0,a;i<n;i++){
    cin>>a;
    check[a]=true;
  }
  cin>>m;
  for(int i=0,a;i<m;i++){
    cin>>a;
    if(check[a])ans++;
  }
  cout<<ans<<endl;
}