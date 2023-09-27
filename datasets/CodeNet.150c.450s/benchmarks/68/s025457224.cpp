#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    int a[n],i,j,k;
    for(i=0;i<n;i++) cin>>a[i];
    k=abs(a[1]-a[0]);
    for(i=0;i<n;i++)
      for(j=i+1;j<n;j++)
	k=min(k,abs(a[i]-a[j]));
    cout<<k<<endl;
  }
  return 0;
}