#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    if(i%3==0)cout<<" "<<i;
    else {
      int x=i;
      while(x>0){
        if(x%10==3){
          cout<<" "<<i;
          break;
        }
        x/=10;
      }
    }
  }
  cout<<endl;
}

