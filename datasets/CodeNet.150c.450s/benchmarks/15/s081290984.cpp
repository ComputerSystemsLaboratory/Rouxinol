#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a[10000],b,c[500],i,k=0,j;
  cin>>n;
  for(i=0;i<n;i++)cin>>a[i];
  cin>>b;
  for(i=0;i<b;i++)cin>>c[i];
  for(i=0;i<b;i++){
    for(j=0;j<n;j++){
      if(c[i]==a[j]){k++;break;}
    }
  }
  cout<<k<<endl;
}