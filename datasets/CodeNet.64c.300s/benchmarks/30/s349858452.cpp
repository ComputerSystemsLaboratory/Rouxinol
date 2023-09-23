#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  while(cin>>n,n){
    n=1000-n;
    int a[]={500,100,50,10,5,1};
    int ans=0;
    for(int i=0;i<6;i++){
      while(n>=a[i]) n-=a[i],ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}