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

int partition(vi &A, int p, int r) {
	int x = A[r];
	int i = p - 1;

	REP2(j, p, r) {
		if (A[j] <= x) {
			i++;
			swap(A[i], A[j]);
		}
	}

	swap(A[i + 1], A[r]);
	return i + 1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vi A(n);
	REP(i, n) cin >> A[i];

	int q = partition(A, 0, n - 1);

	REP(i, n) {
		if (i) cout << " ";
		if (i == q) {
			cout << "[" << A[i] << "]";
		} else {
			cout << A[i];
		}
	}
	cout << "\n";
	return 0;
}