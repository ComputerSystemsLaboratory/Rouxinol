#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
/*
*/
using Graph = vector<bitset<10>>;
ll gcd(ll a,ll b){
  if(b == 0) return a;
  return gcd(b, a % b);
}
const ll P =  1000000007;
ll factorial(ll n){
   ll ans = 1;
   for(int i = n;i>=1;i--){
     ans *= i;
     ans %= P;
   }
   return ans;
}
 
//繰り返し二乗法
ll calc(ll a, ll b, ll p){//aのb乗をpで割った余り
  if(b == 0) return 1;

  else if(b%2 == 0){
    ll d = calc(a,b/2,p);
    return (d*d)%p;
  }
  else if(b%2 == 1){
    return (a * calc(a,b-1,p))%p;
  }
  
}

int main(){
  ll m,n;
  cin >> m >> n;
  cout << calc(m,n,P) << endl;
}
