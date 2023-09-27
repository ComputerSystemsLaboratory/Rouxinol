#include "iostream"
#include "random"
#include "ctime"
#include "chrono"
#include "string"
#include "bitset"
#include "algorithm"
#include "map"

using namespace std;


int main() {
	int N;
	cin >> N;
	while (N) {
		vector<pair<string, string>>v(N);
		for (int i = 0; i < N; i++) {
			cin >> v[i].first >> v[i].second;
		}
		map<string, int>m;
		sort(v.begin(), v.end());
		int ans = 0;
		for (auto i : v) {
			if (m.empty()) {
				m[i.second]++;
				ans++;
				continue;
			}
			if ((*m.begin()).first <= i.first) {
				m[(*m.begin()).first]--;
				if ((*m.begin()).second == 0) {
					m.erase(m.begin());
				}
				m[i.second]++;
			}
			else {
				m[i.second]++;
				ans++;
			}
		}
		cout << ans << endl;
		cin >> N;
	}
	return 0;
}
