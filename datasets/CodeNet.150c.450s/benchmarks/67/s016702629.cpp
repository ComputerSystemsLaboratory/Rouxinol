#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = (1LL << 31) - 1;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1
#define MAX_N 100100 * 3

int n;
int dp[10010];

vector<int> vi;

int sum[100100];
int cnt[1010];

int main() {
	REP(i, 5000)sum[i] = i;
	vi.push_back(0);
	REP(i, 5000) {
		sum[i + 1] += sum[i];
		vi.push_back(sum[i + 1]);
	}
	REP(i, vi.size()) {
		FOR(j, i + 2, vi.size()) {
			if (vi[j] - vi[i] > 1000)continue;
			//if (vi[j] - vi[i] == 9)cout << j << " " << i << endl;
			cnt[vi[j] - vi[i]]++;
		}
	}
	while (cin >> n&&n) {
		cout << cnt[n] << endl;
	}
}