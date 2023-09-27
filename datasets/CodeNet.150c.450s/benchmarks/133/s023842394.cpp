#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
ll gcd(int x, int y) { return (x % y)? gcd(y, x % y): y; }    //最大公約数
ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }     //最小公倍数
using Graph = vector<vector<int>>;
ll inf=300000000000000000;
const double PI = 3.14159265358979323846;
int main(){
  int d;
  cin >> d;
  ll k[26];
  ll c[26];
  rep(i,26)cin >> c[i];
  rep(i,26)k[i]=0;
  ll ans=0;
  ll s[d][26];
  rep(i,d)rep(j,26)cin >> s[i][j];
  int t[d];
  rep(i,d)cin >> t[i];
  rep(i,d)t[i]--;
  rep(i,d){
    ans+=s[i][t[i]];
    k[t[i]]=i+1;
    rep(j,26)ans-=(i+1-k[j])*c[j];
    cout << ans << endl;
  }
}
