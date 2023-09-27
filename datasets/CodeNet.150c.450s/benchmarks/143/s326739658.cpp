#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	map<int, int64_t> freq;
	int64_t running = 0;
	for (int i = 0; i < N; ++i) {
		int num;
		cin >> num;
		freq[num]++;
		running += num;
	}
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; ++i) {
		int64_t b, c;
		cin >> b >> c;
		running += (c-b)*freq[b];
		cout << running << endl;
		freq[c] += freq[b];
		freq[b] = 0;
	}
}