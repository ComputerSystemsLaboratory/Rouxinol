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



int main() {
	ios::sync_with_stdio(false);
	cin >> W >> H;
	while (H) {
		ans = 0;
		string s[30];
		for (int i = 1; i <= H; i++) {
			cin >> s[i];
			s[i] = '#' + s[i] + '#';
		}
		for (int i = 0; i <= W + 1; i++) {
			s[0].push_back('#');
			s[H + 1].push_back('#');
		}
		int dir[5] = { 1,0,-1,0,1 };
		queue<pair<int, int> >Q;
		for (int i = 1; i <= H; i++) {
			for (int j = 1; j <= W; j++) {
				if (s[i][j] == '@') {
					Q.push({ i,j });
					s[i][j] = '#';
					ans++;
				}
			}
		}
		while (!Q.empty()) {
			//cout << "hi";
			int cy, cx;
			cy = Q.front().first;
			cx = Q.front().second;
			for (int i = 0; i < 4; i++) {
				if (s[cy + dir[i]][cx + dir[i + 1]] == '.') {
					s[cy + dir[i]][cx + dir[i + 1]] = '#';
					ans++;
					Q.push({ cy + dir[i] ,cx + dir[i + 1] });
				}
			}
			Q.pop();
		}
		cout << ans << endl;
		cin >> W >> H;
	}
	return 0;
}