#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a[200],min,max,i,c=0,k;
  while((cin>>n>>min>>max),n!=0){
    c=0;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=min-1;i<=max-1;i++){
      if(c<=a[i]-a[i+1]){
	c=a[i]-a[i+1];
	k=i;
      }
    }
    cout<<k+1<<endl;
  }
}