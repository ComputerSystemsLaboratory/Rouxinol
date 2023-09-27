#include <bits/stdc++.h>
#include <unordered_set>
#include <random>
using namespace std;
#define ll long long
#define fr first
#define sc second
#define pll pair<ll, ll>
#define all(v) v.begin(), v.end()

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	vector<int> v(N);
	for (int i = 0; i < N; i++) cin >> v[i];

	deque<int> dq;
	for (int i = 0; i < K; i++) dq.push_back(v[i]);

	for (int i = K; i < N; i++) {
		if (dq.front() < v[i]) cout << "Yes\n";
		else cout << "No\n";
		dq.pop_front();
		dq.push_back(v[i]);
	}

	return 0;
}