#include <iostream>
#include <algorithm>
using namespace std;
int S[1001];
int solve(int n){
  int cnt = 0;
  for(int i=2;i<=n;++i){
    for(int j=1;j<i;++j) if(S[i]-S[j-1]==n) ++cnt;
  }
  return cnt;
}
int main(){
  int n;
  for(int i=1;i<=1000;++i) S[i]=S[i-1]+i;
  while(cin>>n,n){
    cout << solve(n) << endl;
  }
  return 0;
}