#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a[100][100]={0},i,j,b,c,q;
  for(cin>>n,i=0;i<n;i++){
    cin>>b>>q;b--;
    for(j=0;j<q;j++){
      cin>>c;
      a[b][--c]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j)cout<<' ';
      cout<<a[i][j];
    }
    cout<<endl;
  }
}