#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "iomanip"
#include "random"

using namespace std;

const long long int MOD = 1000000007;
const long double EPS = 0.00000001;
const long double PI = 3.1415926535897932384626433;

long long int N, M, K, H, W, L, R;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	while (N) {
		vector<pair<long long int, long long int>>v(N);
		long long int ans = 0;
		for (int i = 0; i < N; i++) {
			cin >> v[i].second >> v[i].first;
		}
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		for (int i = 0; i < N; i++) {
			if (M >= v[i].second) {
				M -= v[i].second;
			}
			else {
				ans += v[i].first*v[i].second;
				ans -= M*v[i].first;
				M = 0;
			}
		}
		cout << ans << endl;
		cin >> N >> M;
	}
	return 0;
}