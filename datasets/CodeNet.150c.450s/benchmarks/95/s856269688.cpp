#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
void solve(){
  ll n;
  cin >> n;
  ll r_feet,l_feet,next=1,cnt=0;
  r_feet=l_feet=0;
  if(n==0) return;
  string s[n];
  for(int i=0;i<n;i++){
    cin >> s[i];
    if(s[i][0]=='l'){
      l_feet=(l_feet+1)%2;
    }else{
      r_feet=(r_feet+1)%2;
    }
    if(next==1&&r_feet==1&&l_feet==1){
      cnt++;
      next=0;
    }else if(next==0&&r_feet==0&&l_feet==0){
      cnt++;
      next=1;
    }
  }
  cout << cnt << endl;
  solve();
}
signed main(){
  solve();
}

