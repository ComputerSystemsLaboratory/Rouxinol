#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
	int n;
	cin >> n;
	vector<pair<long long, long long>> ans = prime_factorize(n);
	cout << n << ": ";
	for (int i=0;i<ans.size();i++) {
		for (int j=0;j<ans[i].second;j++) {
			cout << ans[i].first;
			if (!(i == ans.size()-1 && j == ans[i].second-1)) {
				cout << " ";
			} else {
				cout << endl;
			}
		}
	}
}
