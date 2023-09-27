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
	int r, c;
	cin >> r >> c;
	int t[r+1][c+1];

	REP(i, r){
		REP(j, c){
			cin >> t[i][j];
		}
	}
	
	int sum  = 0;
	REP(i, r){
		REP(j, c){
			sum += t[i][j];
		}
		t[i][c] = sum;
		sum = 0;
	}

	REP(j, c){
		REP(i, r){
			sum += t[i][j];
		}
		t[r][j] = sum;
		sum  = 0;
	}

	REP(i, c){
		sum += t[r][i];
	}
	t[r][c] = sum;

	REP(i, r+1){
		REP(j, c+1){
			cout << t[i][j];
			if (j < c) cout << " ";
		}
		cout << endl;
	}
}



