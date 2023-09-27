#include <bits/stdc++.h>
using namespace std;

const int MAX_SUM = 1500001;

vector< int > getHistgram(int N, const vector< int >& x) {
	vector< int > ret(MAX_SUM, 0);
	for (int i=0; i<N; ++i) {
		int sum = 0;
		for (int j=i; j<N; ++j) {
			sum += x[j];
			ret[sum]++;
		}
	}
	return ret;
}

void run(int N, int M) {
	vector< int > h(N), w(M);
	for (int i=0; i<N; ++i) cin >> h[i];
	for (int i=0; i<M; ++i) cin >> w[i];
	
	vector< int > cnt_h = getHistgram(N, h);
	vector< int > cnt_w = getHistgram(M, w);
	
	long long ans = 0;
	for (int i=0; i<MAX_SUM; ++i) ans += (long long)cnt_h[i] * cnt_w[i];
	cout << ans << endl;
}

int main() {
	int N, M;
	while (cin >> N >> M, N) run(N, M);
}
