#include <bits/stdc++.h>

#define M_PI       3.14159265358979323846   // pi

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> VI;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> t3;
typedef tuple<ll, ll, ll, ll> t4;
typedef tuple<ll, ll, ll, ll, ll> t5;

#define rep(a,n) for(ll a = 0;a < n;a++)
#define repi(a,b,n) for(ll a = b;a < n;a++)

using namespace std;

static const ll INF = 1e15;

template<typename T>
static inline void chmin(T & ref, const T  value) {
    if (ref > value) ref = value;
}

template<typename T>
static inline void chmax(T & ref, const T value) {
    if (ref < value) ref = value;
}

const ll mod = 1000000007;


int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == 0) return 0;
		vector<vector<int>> grid(n, vector<int>(5, 0));
		rep(i, n) {
			rep(j, 5) {
				cin >> grid[i][j];
			}			
		}
		bool updated = true;
		ll score = 0;
		while (updated) {
			updated = false;
			vector<vector<bool>> temp(n, vector<bool>(5, false));
			rep(i, n) {
				rep(j, 3) {
					int color = grid[i][j];
					if (color == -1) continue;
					bool match = true;
					for (int k = 1; k < 3 && j + k < 5; k++) {
						if (grid[i][j + k] != color) {
							match = false;
							break;
						}
					}
					if (match) {
						updated = true;
						rep(k, 3) {
							temp[i][j + k] = true;
						}
					}
				}
			}
			rep(i, n) rep(j, 5) {
				if (temp[i][j]) {
					score += grid[i][j];
				}
			}
			vector<vector<int>> nextGrid(n, vector<int>(5, -1));
			rep(j, 5) {
				int target = n - 1;
				for (int i = n - 1; i >= 0; i--) {
					while(target >= 0 && temp[target][j]) {
						target--;
					}
					if (target < 0) break;
					nextGrid[i][j] = grid[target][j];
					target--;
				}
			}
			swap(grid, nextGrid);
		}
		cout << score << endl;
	}
	return 0;
}


