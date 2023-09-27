#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a);i<int(b);++i)
#define SIZE 200005
#define INF 1000000005LL
//#define INF 1e18
#define MOD 1000000007

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

map<ll,int> prime_factor(ll n){
  map<ll,int> res;
  for(ll i=2;i*i<=n;i++){
    while(n%i==0){
      ++res[i];
      n /= i;
    }
  }
  if(n!=1) res[n] = 1;
  return res;
}

int main(){
  ll n;
  cin >> n;
  map<ll,int> m = prime_factor(n);
  cout << n << ":";
  for(auto p : m){
    rep(i,0,p.second) cout << " " << p.first;
  }
  cout << endl;


  return 0;
}

