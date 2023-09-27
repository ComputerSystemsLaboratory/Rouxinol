#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
const int INF = 1e9;
const double PI = acos(-1.0);

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	vector< vector<int> > A;
	vector<int> b;
	
	REP(i, n) {
		vector<int> v;
		REP(j, m) {
			int in;
			cin >> in;
			v.push_back(in);
		}
		A.push_back(v);
	}
	
	REP(j, m) {
		int in;
		cin >> in;
		b.push_back(in);
	}
	
	REP(i, n) {
		int sum = 0;
		REP(j, m) {
			sum += A[i][j] * b[j];
		}
		cout << sum << "\n";
	}
	
	return 0;
}