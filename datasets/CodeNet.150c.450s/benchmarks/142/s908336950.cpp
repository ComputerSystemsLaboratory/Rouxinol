#include <iostream>
#include <string>
using namespace std;
#define rep(i,n) for((i)=0;(i)<(n);(i)++)
#define max(a,b) ((a)>(b) ? (a) : (b))
#define min(a,b) ((a)<(b) ? (a) : (b))
typedef long long ll;
typedef long double ld;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int main(){
  ll n,m,k,i,j,result=0;
  int a[200010];
  string s;
  cin >> n >> k;
  rep(i,n) cin >> a[i];
  for(i=k;i<n;i++){
    cout << (a[i]>a[i-k] ? "Yes" : "No") << endl;
  }
  return 0;
}