#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a);i<int(b);++i)
#define SIZE 200005
#define INF 1000000005LL
//#define INF 1e18
#define MOD 1000000007

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

ll m,n;
//ll a[SIZE];

//xのn乗
ll mod_pow(ll x, ll n){
  if(n==0) return 1;
  ll res = mod_pow(x*x%MOD,n/2);
  if(n & 1) res = res*x%MOD;
  return res;
}


int main(){
  cin >> m >> n;
  cout << mod_pow(m,n) << endl;

  return 0;
}

