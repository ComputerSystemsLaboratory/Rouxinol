#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  while(true){
    int n,x;
    cin>>n>>x;
    if(n==0&&x==0)break;
    int ans=0;
    for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j++){
        for(int k=j;k<=n;k++){
          if(i==j||j==k||k==i)continue;
          if(i+j+k==x)ans++;
        }
      }
    }
    cout<<ans<<endl;
  }
}

