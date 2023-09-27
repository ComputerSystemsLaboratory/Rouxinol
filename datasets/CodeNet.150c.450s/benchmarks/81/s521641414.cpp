#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

#define For(i, a, b) for(int i = (a); i < (b); i++)
#define Rep(i, n) For(i, 0, (n))
#define Rrep(i, n) for(int i = (n); i >= 0; i--)
#define pb push_back

const int inf = 999999999;
const int mod = 1000000007;
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int d[10][10];

int main(){
	int n = 0;
	while(cin >> n, n){
		Rep(i, 10) Rep(j, 10) d[i][j] = inf;
		Rep(i, 10) d[i][i] = 0;
		int mi = 10, ma = 0;
		Rep(i, n){
			int a, b, c; cin >> a >> b >> c;
			d[a][b] = c; d[b][a] = c;
			mi = min(mi, min(a, b));
			ma = max(ma, max(a, b));
		}
		
		For(k, mi, ma + 1) For(i, mi, ma + 1) For(j, mi, ma + 1){
			d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
		}
		int ans = inf, p = 0;
		For(i, mi, ma + 1){
			int cnt = 0;
			For(j, mi, ma + 1){
				if(i == j) continue;
				cnt += d[i][j];
			}
			if(ans > cnt){
				ans = cnt; p = i;
			}
		}
		cout << p << " " << ans << endl;
	}
	return 0;
}