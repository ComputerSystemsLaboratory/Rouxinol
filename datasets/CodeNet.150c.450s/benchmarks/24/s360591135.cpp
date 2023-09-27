#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	while (cin >> N >> M) {
		if (N == 0) break;
		long long res = 0;
		vector<pair<long long, long long> > a(N);
		for (int i = 0; i < N; ++i) cin >> a[i].second >> a[i].first;
		sort(a.begin(), a.end(), greater<pair<long long, long long> >());
		for (int i = 0; i < N; ++i) {
			if (M >= a[i].second) {
				M -= a[i].second;
			}
			else {
				res += a[i].first * (a[i].second - M);
				M = 0;
			}
		}
		cout << res << endl;
	}
}

