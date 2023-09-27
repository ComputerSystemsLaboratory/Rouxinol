#include <bits/stdc++.h>

#define FOR(i, a, b) for(long long int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;

int n;
int u, k, v;
int hour = 0;
int pos;
int d[101];
int gra[101][101] = {};
int color[101] = {};
queue<int>que;



int main(void) {
	cin >> n;
	
	FOR(i, 1, n) {
		cin >> u >> k;
		FOR(t, 1, k) {
			cin >> v;
			gra[u][v] = 1;
		}
	}

	FOR(i, 1, n) {
		d[i] = -1;
	}

	que.push(1);
	d[1] = hour;
	color[1] = 1;
	
	while (que.empty() != 1) {
		pos = que.front();
		que.pop();
		FOR(i, 1, n) {
			if (gra[pos][i] == 1 && color[i] == 0) {
				que.push(i);
				d[i] = d[pos] + 1;
				color[i] = 1;
			}
		}
	}

	FOR(i, 1, n) {
		cout << i << " " << d[i] << endl;
	}
	return 0;
}
