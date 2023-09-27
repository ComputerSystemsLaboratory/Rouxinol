#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
int n;

int cti(char c) { return (c - '0'); }

int encode(string s) {
	int H = 10 * cti(s[0]) + cti(s[1]);
	int M = 10 * cti(s[3]) + cti(s[4]);
	int S = 10 * cti(s[6]) + cti(s[7]);
	return 3600 * H + 60 * M + S;
}

int main() {
	while (cin >> n, n) {
		priority_queue<pii, vector<pii>, greater<pii> > q;
		for (int i = 0; i < n; i++) {
			string in, out; cin >> in >> out;
			q.push(make_pair(encode(in), 1));
			q.push(make_pair(encode(out), -1));
		}
		
		int ans = 0, cnt = 0;
		while (!q.empty()) {
			int t = q.top().second; q.pop();
			cnt += t;
			ans = max(ans, cnt);
		}
		
		cout << ans << endl;
	}
	
	return 0;
}