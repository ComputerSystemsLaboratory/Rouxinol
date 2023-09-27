#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(long long i=0; i<(int)n; i++)
#define rep1(i,n) for(long long i=1; i<(int)n; i++)
#define repa(i,a,n) for(long long i=(a); i<(int)(n); i++)
#define all(vec) vec.begin(),vec.end()
using vi = vector<int>;
using vs = vector<string>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using psi = pair<string, int>;
const int dx[4] = {1, 0,-1, 0};
const int dy[4] = {0, 1, 0,-1};
const int mod = 1e9+7;
int gcd(int a, int b){if(a%b == 0){return(b);}else{return(gcd(b, a%b));}}
int lcm(int a, int b){return a / gcd(a, b)*b;}

int N, M, K, H, W, L, R, X;
//string S, T;
signed main(){
  cin >> N;
  map<int,int> mp;
  int ans = 0;
  rep(i,N){ int a; cin >> a; mp[a]++; ans += a;}
  int Q; cin >> Q;
  rep(i,Q){
    int B, C; cin >> B >> C;
    ans = ans + C*mp[B] - B*mp[B];
    mp[C] += mp[B];
    mp[B] = 0;
    cout << ans << endl;
  }
  
  return 0;
}
