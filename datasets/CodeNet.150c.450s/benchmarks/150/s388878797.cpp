// counting sort
//
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

// preconditions;
// A[i] <= k for all i
// A, B are 1 origin.
void CountingSort(vector<ll> &A, vector<ll> &B, ll k) {
	// the i-th element of the array C has
	// the number of elements of A, which are less than or equal to i; 
	vector<ll> C(k+1, 0);
	for (ll j=1;j<A.size();++j) {
		C[A[j]]++;
	}
	for (ll i=1;i<k+1;++i) {
		C[i] += C[i-1];
	}
	// 
	for (ll j=A.size()-1; j>=0; --j) {
		B[C[A[j]]] = A[j]; 
		C[A[j]]--;
	}	
}

int main() {
	ll n;
	cin >> n;
	vector<ll> A(n+1,0);
	vector<ll> B(n+1,0);
	for (ll i=1;i<A.size();++i) scanf("%lld", &A[i]);
	ll k = *max_element(A.begin(), A.end()); 

	CountingSort(A, B, k);
	for (ll i=1;i<B.size();++i) {
		if (i != 1) cout << " ";
		cout << B[i];
	}
	cout << endl;
	return 0;
}

