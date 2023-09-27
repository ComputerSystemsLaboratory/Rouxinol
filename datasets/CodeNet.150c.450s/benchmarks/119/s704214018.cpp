#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
typedef unsigned int ui;
int main(){
	int w, h;
	int i, j,k,l;
	while (cin >> w >> h) {
		if (w == 0)break;
		int lan[52][52];
		for (i = 0; i < 52; i++) {
			for (j = 0; j < 52; j++) {
				lan[i][j] = 0;
			}
		}
		for (j = 1; j <= h; j++) {
			for (i = 1; i <= w; i++) {
				cin >> lan[i][j];
			}
		}
		int count = 0;
		for (j = 1; j <= h; j++) {
			for (i = 1; i <= w; i++) {
				if (lan[i][j] == 1) {
					count++; lan[i][j] = 0;
					vector<P> q; q.push_back(P { i,j });
					while (!q.empty()) {
						int nx = q[0].first; int ny = q[0].second;
						q.erase(q.begin() + 0);
						for (k = nx - 1; k <= nx + 1; k++) {
							for (l = ny - 1; l <= ny + 1; l++) {
								if (lan[k][l] == 1) {
									q.push_back(P{k,l}); lan[k][l] = 0;
								}
							}
						}
					}
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
