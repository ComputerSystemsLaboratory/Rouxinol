#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
using ll = long long;

struct Card {
	char suit;
	ll number;
	ll index;
};

// p < r < A.size()
// after this operation: p,...,q-1, q, q+1, ..., r
// A[p],...,A[q-1] <= A[q]
// A[q] < A[q+1], ..., A[r]
// returns q
// r = p+1であれば, かならず整列される.
//
ll Partition(vector<Card> &A, ll p, ll r) {
	Card x = A[r];// pivot 
	ll i = p-1;
	for (ll j=p; j<r; ++j) {
		if (A[j].number <= x.number) {
			i++;
			Card t = A[j];
			A[j] = A[i];
			A[i] = t;
		}
	}
	A[r] = A[i+1];
	A[i+1] = x; 
	return i+1;
}

void QuickSort(vector<Card> &A, ll p, ll r) {
	if (p < r) {
		ll q = Partition(A, p, r);
		QuickSort(A, p, q-1);
		QuickSort(A, q+1, r);
	}
}

bool IsStable(const vector<Card> &A) {
	for (ll i=1; i<A.size(); ++i) {
		if (A[i-1].number == A[i].number && A[i-1].index > A[i].index) {
			return false;
		}	
	}
	return true;
}

int main() {
	ll n;
	cin >> n;
	vector<Card> A(n);
	for(ll i=0;i<n;++i) {
		scanf(" %c %lld", &A[i].suit, &A[i].number); // \n
		A[i].index = i;
	}

//	cout << endl;
//	for(ll i=0;i<n;++i) {
//	 cout  << A[i].suit << " " << A[i].number << endl;;
//	}
	QuickSort(A, 0, A.size()-1);
	if (IsStable(A)) cout << "Stable";
	else cout << "Not stable";
	cout << endl;
	for(ll i=0;i<n;++i) {
	 cout  << A[i].suit << " " << A[i].number << endl;;
	}
	return 0;
}


