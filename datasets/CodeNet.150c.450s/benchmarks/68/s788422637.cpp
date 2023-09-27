#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,mn;
  int a[1000];
  while(1){
    cin>>n;
    if(n==0) break;
    for(int i=0;i<1000;i++){
      a[i]=0;
    }
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    mn=1000000;
    for(int i=0;i<n-1;i++){
      mn=min(mn,a[i+1]-a[i]);
    }
    cout<<mn<<endl;
  }
  return 0;
}

