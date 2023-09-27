#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(void) {
	int N,M;
	while (cin >> N >> M, N) {
		map<int,int> data;
		vector<int> w(N),h(M);
		for (int i = 0; i < N; ++i) {
			cin >> w[i];
			++data[w[i]];
		}
		int temp;
		for (int i = 0; i < N-1; ++i) {
			temp = w[i];
			for (int j = i+1; j < N; ++j) {
				temp += w[j];
				++data[temp];
			}
		}

		int res = 0;
		for (int i = 0; i < M; ++i) {
			cin >> h[i];
			if (data[h[i]] > 0) {
				res += data[h[i]];
			}
		}
		for (int i = 0; i < M-1; ++i) {
			temp = h[i];
			for (int j = i+1; j < M; ++j) {
				temp += h[j];
				if (data[temp] > 0) {
					res += data[temp];
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}