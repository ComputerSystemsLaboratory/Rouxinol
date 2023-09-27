//GCD and LCM
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y){
  if(y==0)return x;
  else return gcd(y, x%y);
}

ll lcm(ll x, ll y){
  ll g=gcd(x, y);
  return (x/g)*y;
}

int main(){
  ll a, b;
  while(scanf("%lld %lld", &a, &b)!=EOF){
    if(a<b) swap(a, b);
    printf("%lld %lld\n", gcd(a, b), lcm(a, b));
  }
  return 0;
}