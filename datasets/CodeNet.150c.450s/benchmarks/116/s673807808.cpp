#include<iostream>
using namespace std;
int main(){
  int n,k;
  while(cin>>n>>k){
    if(n==0&&k==0) break;
    int s[n],ans=0,su=0;
    for(int i=0;i<n;i++) cin >> s[i];
    for(int i=0;i<k;i++) su += s[i];
    ans = su; 
    for(int i=k;i<n;i++){
      su += (s[i] - s[i-k]);
      if(ans<su) ans = su;
    }
    cout << ans << endl;
  }
  return 0;
}