#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int N, M;
int sum;
vector<pii> pvec;

void solve() {
	sort(pvec.begin(), pvec.end(), greater<pii>());
	
	for (int i = 0; i < N; i++) {
		pii p = pvec[i];
		
		if (p.second <= M) {
			M -= p.second;
			sum -= p.first * p.second;
		} else {
			sum -= p.first * M;
			break;
		}
	}
	
	cout << sum << endl;
}

int main() {
	while (1) {
		cin >> N >> M; if (N == 0 && M == 0) break;
		
		pvec.clear();
		sum = 0;
		for (int i = 0; i < N; i++) {
			int D, P; cin >> D >> P;
			sum += D * P;
			pvec.push_back(make_pair(P, D));
		}
		
		solve();
	}
	
	return 0;
}