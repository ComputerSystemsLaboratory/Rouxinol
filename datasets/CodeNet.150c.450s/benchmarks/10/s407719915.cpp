#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
 
//const int dx[] = {1, 0, -1, 0, 1, -1, -1, 1};
//const int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};
 
int main()
{
	int build[4][3][10];
	REP(i, 4){
		REP(j, 3){
			REP(k, 10){
				build[i][j][k] = 0;
			}
		}
	}

	int n;
	cin >> n;
	while (n){
		int b, f, r, v;
		cin >> b >> f >> r >> v;
		build[b-1][f-1][r-1] += v;
		n--;
	}

	REP(i, 4){
		REP(j, 3){
			REP(k, 10){
				cout << " " << build[i][j][k];
			}
			cout << endl;
		}
		if (i < 3) cout << "####################" << endl;
	}
}

