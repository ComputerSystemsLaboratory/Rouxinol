#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
using ll = long long;

// p < r < A.size()
// after this operation: p,...,q-1, q, q+1, ..., r
// A[p],...,A[q-1] <= A[q]
// A[q] < A[q+1], ..., A[r]
// returns q
ll Partition(vector<ll> &A, ll p, ll r) {
	ll x = A[r];// pivot 
	ll i = p-1;
	for (ll j=p; j<r; ++j) {
		if (A[j] <= x) {
			i++;
			ll t = A[j];
			A[j] = A[i];
			A[i] = t;
		}
	}
	A[r] = A[i+1];
	A[i+1] = x; 
	return i+1;
}

int main() {
	ll n;
	cin >> n;
	vector<ll> A(n,0);
	for(ll i=0;i<n;++i) scanf("%lld", &A[i]);

	ll q = Partition(A, 0, A.size()-1);
	for(ll i=0;i<n;++i) {
	 if(i != 0) cout << " ";
	 if(i == q) {
		 cout << "[" << A[i] << "]";
		 continue;
	 } 
	 cout  << A[i];
	}
	cout << endl;
	return 0;
}


