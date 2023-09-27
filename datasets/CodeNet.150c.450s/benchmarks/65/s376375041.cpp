#include "bits/stdc++.h"

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
#define PI 3.14159265358979

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
vector<pair<char, int>> BubbleSort(vector<pair<char, int>> A, int  N) {
	REP(i, N) {
		for (int j = N - 1; j >= 1; j--) {
			if (A[j].second < A[j - 1].second) {
				swap(A[j].first, A[j - 1].first);
				swap(A[j].second, A[j - 1].second);
			}
		}
	}

	return A;
}

vector<pair<char, int>> SelectionSort(vector<pair<char, int>> A, int N) {
	REP(i, N) {
		int minJ = i;
		REP2(j, i, N) {
			if (A[j].second < A[minJ].second) {
				minJ = j;
			}
		}
		swap(A[i].first, A[minJ].first);
		swap(A[i].second, A[minJ].second);
	}

	return  A;
}

void print(vector<pair<char, int>> A, int N) {
	REP(i, N) {
		if (i > 0) cout << " ";
		cout << A[i].first << A[i].second;
	}
	cout << "\n";
}

bool isStable(vector<pair<char, int>> C1, vector<pair<char, int>> C2, int N) {
	REP(i, N) {
		if (C1[i].first != C2[i].first) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vector<pair<char, int>> card(n);

	REP(i, n) {
		cin >> card[i].first >> card[i].second;
	}

	vector<pair<char, int>> C1 = BubbleSort(card, n);
	vector<pair<char, int>> C2 = SelectionSort(card, n);

	print(C1, n);
	cout << "Stable" << "\n";
	print(C2, n);

	if (isStable(C1, C2, n)) {
		cout << "Stable" << "\n";
	} else {
		cout << "Not stable" << "\n";
	}
	return 0;
}