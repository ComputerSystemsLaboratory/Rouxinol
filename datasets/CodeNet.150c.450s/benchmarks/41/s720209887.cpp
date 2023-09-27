#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1LL<<50
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

ll d[105][105];

void warshall_floyd(int n) {
	rep(k,n) {
		rep(i,n) {
			rep(j,n) {
				if(d[i][k] != INF && d[k][j] != INF) {
					d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
				}
			}
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	rep(i, n) rep(j, n) d[i][j] = INF;
	rep(i, n) d[i][i] = 0;

	rep(i, m) {
		int s, t, c;
		cin >> s >> t >> c;

		d[s][t] = c;
	}

	warshall_floyd(n);

	bool flag = false;
	rep(i, n) {
		if(d[i][i] < 0) flag = true;
	}

	if(flag) {
		cout << "NEGATIVE CYCLE" << endl;
	} else {
		rep(i, n) {
			rep(j, n) {
				if(d[i][j] == INF) cout << "INF";
				else cout << d[i][j];

				if(j == n-1) cout << endl;
				else cout << " ";
			}
		}
	}

	return 0;
}