#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
#define mod 1000000007

ll pow(ll m, ll n){
	  if(n==0) return 1;
	  if(n%2==1)	return pow(m*m%mod,n/2) % mod * m % mod;
	  return pow(m*m%mod,n/2) % mod;
}

int main(){

	  ll m,n; cin >> m >> n;
	  cout << pow(m,n)%mod << endl;
}