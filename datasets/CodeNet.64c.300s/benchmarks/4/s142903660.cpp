#include <bits/stdc++.h>
#define rep(i,n)for(long long i=0;i<(n);i++)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
const int MOD = 1000000007;
ll gcd(ll x, ll y){
  if(y==0)return x;
  else return gcd(y,x%y);
}
int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if(a<b && b<c ) cout << "Yes" << endl;
  else cout << "No" << endl;
  
}
