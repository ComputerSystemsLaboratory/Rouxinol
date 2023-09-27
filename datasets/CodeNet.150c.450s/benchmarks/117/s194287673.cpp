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
#define MAX 500000
int cnt = 0;

template<typename T>
void merge(vector<T> & A, int left, int mid, int right) {
	auto n1 = mid - left;
	auto n2 = right - mid;
	vector<T> L(n1);
	vector<T> R(n2);

	copy(A.begin() + left, A.begin() + mid, L.begin());
	copy(A.begin() + mid, A.begin() + right, R.begin());

	L.push_back(INF + 5);
	R.push_back(INF + 5);

	auto itL = L.begin();
	auto itR = R.begin();

	for (auto itA = A.begin() + left; itA != A.begin() + right; itA++) {
		if (*itL <= *itR) {
			*itA = *itL;
			itL++;
		} else {
			*itA = *itR;
			itR++;
		}
	}

	cnt += right - left;
}

template<typename T>
void merge_sort(vector<T> & A, int left, int right) {
	if (left + 1 < right) {
		auto mid = (left + right) / 2;
		merge_sort(A, left, mid);
		merge_sort(A, mid, right);

		merge(A, left, mid, right);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n = 0;
	cin >> n;

	vi A(n);
	REP(i, n) cin >> A[i];

	merge_sort(A, 0, n);

	REP(i, n) {
		if (i) cout << " ";
		cout << A[i];
	}
	cout << "\n";

	cout << cnt << "\n";
	return 0;
}