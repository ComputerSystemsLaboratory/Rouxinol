#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
#include<queue>
#include<stack>
#define INF 9999999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;
typedef pair<int, int>P;
typedef pair<int, P> PP;

int V,E;
ll d[105][105];

void warshall_floyd()
{
	int ope = 0;
	for (int k = 0; k < V; k++) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				if (d[i][j] + d[j][k] + d[k][i] < 0) {
					ope++; break;
				}
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	if (ope == 0) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V - 1; j++) {
				if (d[i][j] > 2000000000)cout << "INF"<<" ";
				else cout << d[i][j]<<" ";
			}
			if (d[i][V - 1] > 2000000000)cout << "INF" << endl;
			else cout << d[i][V-1] << endl;
		}
	}
	else cout << "NEGATIVE CYCLE" << endl;
}

int main()
{
	cin >> V >> E;
	int s, t, di;

	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			d[i][j] = INF;
			if (i == j)d[i][j] = 0;
		}
	}
	for (int i = 0; i < E; i++) {
		cin >> s >> t >> di;
		d[s][t] = di;
	}
	warshall_floyd();

	return 0;
}