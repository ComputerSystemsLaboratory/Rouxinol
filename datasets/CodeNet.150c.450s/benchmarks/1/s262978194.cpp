#include<bits/stdc++.h>
using namespace std;
struct LIS{
  int n;
  vector<int>dp,a;
  LIS(int sz):dp(sz),a(sz),n(sz){}
  void Input(){
    for(int i=0;i<n;i++) cin>>a[i];
  }
  int lis(){
    dp[0]=a[0];
    int len=1;
    for(int i=1;i<n;i++){
      if(dp[len-1]<a[i]) dp[len++] = a[i];
      else *lower_bound(dp.begin(),dp.begin()+len,a[i]) = a[i];
    }
    return len;
  }
};
int main(){
  int n;
  cin>>n;
  LIS L(n);
  L.Input();
  cout<<L.lis()<<endl;
}
