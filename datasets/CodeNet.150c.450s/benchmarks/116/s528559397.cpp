#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;

int gcd(lint x, lint y){
  return y==0 ? x:gcd(y,x % y);
}

int digsum(int n) {
  int res = 0;
  while(n > 0) {
    res += n%10;
    n /= 10;
  }
  return res;
}

int dignum(int n) {
  int res = 0;
  while(n > 0) {
    res++;
    n /= 10;
  }
  return res;
}

int stringcount(string s, char c) {
  return count(s.cbegin(), s.cend(), c);
}

int lcm(lint x, lint y){
  return x/ gcd(x, y) * y;
}

int combi(int n, int r){
  int num = 1;
  for(int i = 1; i <= r; i++){
    num = num * (n - i + 1) / i;
  }
  return num;
}

int main(){
  const lint inf=1LL<<60;
  bool is=true;
  lint n,k;cin>>n>>k;
  int count=0;
  vector<int> r;
  while(is){
    if(n==0&&k==0) break;
    lint a[101000],s[101000];
    rep(i,n){
      cin>>a[i];
    }
    s[0]=0;
    rep(i,n){
      s[i+1]=s[i]+a[i];
    }
    lint result=-inf;
    for(int i=0;i<=n-k;i++){
      lint sum=s[k+i]-s[i];
      if(result<sum) result=sum;
    }
    r.pb(result);
    cin>>n>>k;
  }
  for(int i=0;i<r.size();i++){
    cout<<r[i]<<endl;
  }
  
}
