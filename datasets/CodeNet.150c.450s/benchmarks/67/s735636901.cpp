#include <bits/stdc++.h>
using namespace std;

int ans=0,n;

int main(){
  int i,sum,now;
  while(1){
    cin >> n;
    if(n==0)break;
    ans = 0;
    for(i=1;i<n;i++){
      now = i;
      sum = 0;
      while(sum<n)sum+=now++;
      if(sum==n)ans++;
    }
    cout << ans << endl;
  }
  return 0;
}

