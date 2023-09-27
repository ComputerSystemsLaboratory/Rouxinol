#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)
#define RREP(i, a, n) for(int i=n-1; i>=a; i--)
#define MP(a, b) make_pair(a, b)
#define F first
#define S second

int main() {
	int N, M;
	while (cin >> N >> M, N || M) {
		vector<pair<int, int>> vp;
		REP(i, 0, N) {
			int d, p;
			cin >> d >> p;
			vp.push_back(MP(p, d));
		}

		sort(vp.begin(), vp.end());

		int num = 0;
		bool flag = true;
		RREP(i, 0, vp.size()) {
			if (flag && vp[i].S < M) M -= vp[i].S;
			else if (flag && vp[i].S >= M) {
				num += (vp[i].S - M) * vp[i].F;
				M = 0;
				flag = false;
			}
			else num += vp[i].S * vp[i].F;
		}

		cout << num << endl;
	}
	return 0;
}