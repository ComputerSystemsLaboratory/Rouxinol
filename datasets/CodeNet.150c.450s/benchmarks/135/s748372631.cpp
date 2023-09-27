#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
using namespace std;

int h[1500];
int w[1500];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N, M;
	while(cin >> N >> M, N) {
		map<int, int> hm;
		for(int i = 0; i < N; i++) {
			cin >> h[i];
		}
		for(int i = 0; i < M; i++) {
			cin >> w[i];
		}

		for(int i = 0; i < N; i++) {
			int sum = 0;
			for(int j = 1; i + j <= N; j++) {
				sum += h[i + j - 1];
				hm[sum]++;
			}
		}

		int ans = 0;
		for(int i = 0; i < M; i++) {
			int sum = 0;
			for(int j = 1; i + j <= M; j++) {
				sum += w[i + j - 1];
				if(hm.find(sum) != hm.end()) {
					ans += hm[sum];
				}
			}
		}

		cout << ans << endl;
	}

}