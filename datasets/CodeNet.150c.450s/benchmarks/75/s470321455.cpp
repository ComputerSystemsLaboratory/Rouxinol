#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void max_heapify(vector<ll> &A, ll i) {
	ll H = A.size() - 1; // size of 1-origin array A
	ll lc, rc;
	lc = 2*i;
	rc = 2*i + 1;
	ll largest = i;
	if (lc <= H && A[lc] > A[i]) {
		largest = lc;
	}
	if (rc <= H && A[rc] > A[largest]) {
		largest = rc;
	}

	if (largest != i) {
		ll temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		max_heapify(A, largest); 
	}
}

void build_max_heap(vector<ll> &A) {
	ll H = A.size() - 1;
	for (ll i=H/2; i>0; --i) {
		max_heapify(A, i);
	}
}

int main() {
	ll H;
	cin >> H;
	vector<ll> A(H+1);
	for (ll i=1; i<A.size(); ++i) cin >> A[i];
	build_max_heap(A);
	for (ll i=1; i<A.size(); ++i) cout << " " << A[i];
	cout << endl;
	return 0;
}


