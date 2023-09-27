#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<map>
#include<set>

using namespace std;

typedef long long ll;
typedef vector<int> VI;

#define FOR(i,n) for(int (i)=0;(i)<(n);(i)++)
#define FOR1(i,n) for(int (i)=1;(i)<(n);(i)++)
#define eFOR(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define eFOR1(i,n) for(int (i)=1;(i)<=(n);(i)++)
#define SORT(i) sort((i).begin(),(i).end())
constexpr auto INF = 1000000000;
constexpr auto LLINF = 9223372036854775807;
constexpr auto mod = 1000000007;

int w, h, c[50][50];
int dx[8] = { -1,0,1,-1,1,-1,0,1 }, dy[8] = { -1,-1,-1,0,0,1,1,1 };
void search(int x, int y) {
	if (x >= 0 && x < w && y >= 0 && y < h) {
		if (c[y][x] == 1) {
			c[y][x] = 0;
			FOR(k, 8)search(x + dx[k], y + dy[k]);
		}
	}
}

int main() {
	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0)break;
		FOR(i, h)FOR(j, w)cin >> c[i][j];
		int cnt = 0;
		FOR(i, h)FOR(j, w)if (c[i][j] == 1) {
			search(j, i);
			cnt++;
		}
		cout << cnt << endl;
	}
	

	return 0;
}
