#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "math.h"
#include "utility"
#include "string"
#include "map"
#include "unordered_map"
#include "iomanip"
#include "random"

using namespace std;
const long long int MOD = 1000000007;

long long int power(long long int x, long long int n, long long int M) {
	long long int tmp = 1;

	if (n > 0) {
		tmp = power(x, n / 2, M);
		if (n % 2 == 0) tmp = (tmp*tmp) % M;
		else tmp = (((tmp*tmp) % M)*x) % M;
	}
	return tmp;
}

long long int N, M, K, Q, W, H, L, R;
long long int ans;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	while (N) {
		int num[21][21] = {};
		for (int i = 0; i < N; i++) {
			int a, b;
			cin >> a >> b;
			num[a][b]++;
		}
		cin >> M;
		int x = 10;
		int y = 10;
		if (num[x][y]) {
			num[x][y]--;
			N--;
		}
		for (int i = 0; i < M; i++) {
			string c;
			cin >> c >> K;
			if (c == "N") {
				for (int j = y + 1; j <= y + K; j++) {
					if (num[x][j]) {
						num[x][j]--;
						N--;
					}
				}
				y += K;
			}
			if (c == "S") {
				for (int j = y -1; j >= y - K; j--) {
					if (num[x][j]) {
						num[x][j]--;
						N--;
					}
				}
				y -= K;
			}
			if (c == "E") {
				for (int j = x + 1; j <= x + K; j++) {
					if (num[j][y]) {
						num[j][y]--;
						N--;
					}
				}
				x += K;
			}
			if (c == "W") {
				for (int j = x -1; j >= x - K; j--) {
					if (num[j][y]) {
						num[j][y]--;
						N--;
					}
				}
				x -= K;
			}
		}
		if (!N) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
		cin >> N;
	}
	return 0;
}