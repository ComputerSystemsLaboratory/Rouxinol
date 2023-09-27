#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1000000007
using namespace std;

int main(){
  long n,q;
  cin >> n;
  long a[n];
  long d[100005];
  rep(i,100005)d[i] = 0;
  long ans = 0;
  rep(i,n){
    cin >> a[i];
    d[a[i]]++;
    ans += a[i];
  }
  cin >> q;
  long b,c;
  rep(i,q){
    cin >> b >> c;
    ans += (c-b)*d[b];
    d[c] += d[b];
    d[b] = 0;
    cout << ans << endl;
  }
  return 0;
}