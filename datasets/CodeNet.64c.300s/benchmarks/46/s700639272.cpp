#include <bits/stdc++.h>
using namespace std;


int isPrime(int n){
  if(n == 0 || n == 1) return 0;
  for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
  return 1;
}

signed main(){

  while(1){
    int a, d, n;
    cin>>a>>d>>n;
    if(a == 0 && d == 0 && n == 0) break;
    int cnt = 0;
    int ans = -1;
    for(int num=a; cnt < n;num+=d){
      if(isPrime(num) == 0) continue;
      cnt++;
      ans = num;
    }
    cout<<ans<<endl;
  }
  return 0;
}

