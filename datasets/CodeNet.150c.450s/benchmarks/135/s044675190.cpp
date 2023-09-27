#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <map>
using namespace std;

#define REP(i, s, e) for (int i = (s); i < (e); i++)
#define REPI(i, s, e) for (int i = (s); i <= (e); i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)
#define ALL(v) (v).begin(), (v).end()

#define dump(x) (cout << #x << " = " << x << endl)
#define dump2(x, y) (cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")" << endl)
#define dump3(x, y, z) (cout << "(" << #x << ", " << #y << ", " << #z << ") = (" << x << ", " << y << ", "<< z << ")" << endl)

typedef long long ll;
typedef pair<int, int> pii;

int N, M;
vector<int> hh, ww;

#define MAX 1500001

int main(void)
{
	while (cin >> N >> M, N|M) {
		hh = vector<int>(N+1, 0);
		ww = vector<int>(M+1, 0);

		REPI(i, 1, N) {
			cin >> hh[i];
			hh[i] += hh[i-1];
		}
		REPI(i, 1, M) {
			cin >> ww[i];
			ww[i] += ww[i-1];
		}

		int cnt = 0;
		int wd[MAX];

		memset(wd, 0, sizeof(wd));
		rep(i, ww.size())
			REP(j, i+1, ww.size())
				wd[ww[j]-ww[i]]++;

		rep(i, hh.size())
			REP(j, i+1, hh.size())
				cnt += wd[hh[j]-hh[i]];

		cout << cnt << endl;
	}
	
	return 0;
}