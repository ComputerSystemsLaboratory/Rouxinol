#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 1e2+10;
const int MAX_W = 1e4+10;

struct Item
{
	int v, w;
};

int N, W;
int dp[MAX_N][MAX_W];
Item items[MAX_N];

void solve() {
	for (int i = 0; i < N; ++i) {
		Item item = items[i];
		for (int w = 0; w <= W; ++w) {
			if (w < item.w) {
				dp[i+1][w] = dp[i][w];
			}
			else {
				dp[i+1][w] = max(dp[i][w], dp[i][w-item.w] + item.v);
			}
		}
	}
}


int main(int argc, char const *argv[])
{
	cin >> N >> W;
	for (int i = 0; i < N; ++i) {
		cin >> items[i].v >> items[i].w;
	}

	solve();

	cout << dp[N][W] << endl;
	return 0;
}
