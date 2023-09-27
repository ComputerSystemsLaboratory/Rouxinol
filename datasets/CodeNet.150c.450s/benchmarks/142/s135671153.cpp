#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define fi first
#define se second
#define INF 1000000009
#define LLINF 1000000000000000009LL
using ll = long long;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int>a(n);
  rep(i,n)cin>>a[i];
  rep(i,n-k){
    if(a[i]<a[i+k])puts("Yes");
    else puts("No");
  }
  return(0);
}