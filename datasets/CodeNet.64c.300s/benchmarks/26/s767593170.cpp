#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define M 1000000007

ll pow(ll m, ll n){
	  if(n==0) return 1;
	  if(n%2 == 0)
			return pow( m*m%M, n/2)%M;
	  else
			return (pow( m*m%M, (n-1)/2)%M * m)%M;
}

int main (){

	  ll m,n;
	  cin >> m >> n;
	  cout << pow(m,n) << endl;
}