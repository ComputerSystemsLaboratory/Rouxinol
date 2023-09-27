#include "bits/stdc++.h"
#include <unordered_set>

#define REP(i, n) for(decltype(n) i = 0; i < (n); i++)
#define REP2(i, x, n) for(decltype(x) i = (x); i < (n); i++)
#define REP3(i, x, n) for(decltype(x) i = (x); i <= (n); i++)
#define RREP(i, n) for (decltype(n) i = (n) - 1;i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

#define LL long long int
#define LD long double

#define INF 1000000000
#define PI 3.14159265358979323846

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

// N, E, S, W
const int dx[4] = { -1, 0,  1,  0 };
const int dy[4] = { 0, 1,  0, -1 };

typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<LL> vll;
//==============================================
template<typename T>
void merge(vector<T> &A, int left, int mid, int right) {
	auto n1 = mid - left;
	auto n2 = right - mid;
	vector<T> L(n1);
	vector<T> R(n2);

	copy(A.begin() + left, A.begin() + mid, L.begin());
	copy(A.begin() + mid, A.begin() + right, R.begin());

	L.push_back(make_pair(INF + 5, 'Z'));
	R.push_back(make_pair(INF + 5, 'Z'));

	for (int i = 0, j = 0, k = left; k<right; k++) {
		if (L[i].first <= R[j].first) {
			A[k] = L[i];
			i++;
		} else {
			A[k] = R[j];
			j++;
		}
	}
}

template<typename T>
void mergeSort(vector<T> &A, int left, int right) {
	if (left + 1 < right) {
		auto mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);

		merge(A, left, mid, right);
	}
}

template<typename T>
int partition(vector<T> &B, int p, int r) {
	int x = B[r].first;
	int i = p - 1;

	REP2(j, p, r) {
		if (B[j].first <= x) {
			i++;
			swap(B[i], B[j]);
		}
	}

	swap(B[i + 1], B[r]);
	return i + 1;
}

template<typename T>
void quickSort(vector<T> &B, int p, int r) {
	if (p < r) {
		int q = partition(B, p, r);
		quickSort(B, p, q - 1);
		quickSort(B, q + 1 , r);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<pair<int, char>>A(n);
	vector<pair<int, char>>B(n);
	REP(i, n) {
		char c; int n;
		cin >> c >> n;
		A[i].second = c;
		A[i].first  = n;

		B[i].second = c;
		B[i].first  = n;
	}

	mergeSort(A, 0, n);
	quickSort(B, 0, n - 1);

	if (A == B) {
		cout << "Stable" << "\n";
	} else {
		cout << "Not stable" << "\n";
	}

	REP(i, n) {
		if (i) cout << "\n";
		cout << B[i].second << " " << B[i].first;
	}
	cout << "\n";

	return 0;
}