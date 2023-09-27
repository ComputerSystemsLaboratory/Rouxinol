#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using msi = map<string, int>;
using mii = map<int, int>;
using psi = pair<string, int>;
using pii = pair<int, int>;
using vlai = valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1E9
#define EPS 1E-9
#define MOD (ll)(1E9+7)
#define PI 3.1415926535897932384

template <class T>ostream &operator<<(std::ostream &o, const vector<T> &v)
{
	rep(i, v.size()) {
		o << (i > 0 ? " " : "") << v[i];
	}
	return o;
}



int main() {
	int w, h;
	int dx[8] = { -1, 0 , 1,-1,1,-1,0,1};
	int dy[8] = { -1,-1 ,-1, 0,0, 1,1,1};
	int input;
	while (1) {
		cin >> w >> h;
		if (w == 0) break;
		vector<vector<int>> field(h + 2, vector<int>(w + 2, 2));
		for (int i = 1; i < h + 1; i++) {
			for (int j = 1; j < w + 1; j++) {
				cin >> input;
				if (input == 1) {
					field[i][j] = 1;
				}
				else {
					field[i][j] = 0;
				}
			}
		}
		/*
		rep(i, h + 2) {
			rep(j, w + 2) {
				cout << field[i][j] << " " ;
			}
			cout << endl;
		}
		*/
		int ans = 0;
		for (int i = 1; i < h + 1; i++) {
			for (int j = 1; j < w + 1; j++) {
				if (field[i][j] == 1) {
					queue<pair<int, int>> que;
					que.emplace(i, j);
					ans++;
					while (!que.empty()) {
						pair<int, int> now = que.front();
						que.pop();
						if (field[now.first][now.second] == 0) continue;
						field[now.first][now.second] = 0;
						rep(k, 8) {
							if (field[now.first + dy[k]][now.second + dx[k]] == 1) {
								que.emplace(now.first + dy[k], now.second + dx[k]);
							}

						}
					}
				}
			}
		}
		cout << ans << endl;
	}
}

