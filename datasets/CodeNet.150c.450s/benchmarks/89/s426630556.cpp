#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))
#define xyrange(x, minX, maxX, y, minY, maxY) (range(x, minX, maxX) && range(y, minY, maxY))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;
typedef vector<PII> VPII;

int a, b, n;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};
const int INF = INT_MAX / 2;

vector<bool> isPrimes(int n) {
	vector<bool> res(n, true);
	res[0] = res[1] = false;
	for (int i = 2;i < sqrt(n);i++) {
		if (res[i]) {
			for (int j = 0;i * (j + 2) < n;j++) {
				res[i * (j + 2)] = false;
			}
		}
	}
	return res;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	VB is_primes = isPrimes(100 * 100 * 101);
	while (1) {
		cin >> a >> b >> n;
		if (a == 0 && b == 0 && n == 0) break;
		int i = 0;
		int cnt = 0;
		int g;
		while (1) {
			g = a + i * b;
			if (is_primes[g]) {
				cnt++;
			}
			if (cnt == n) {
				break;
			}
			i++;
		}
		cout << g << endl;
	}
	return 0;
}