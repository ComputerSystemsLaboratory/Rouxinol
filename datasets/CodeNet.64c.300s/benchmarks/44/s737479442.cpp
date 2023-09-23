#include<iostream>
#include<algorithm>
#define INF 5e7
using namespace std;

int graf[15][15];

void warshall() {
	for (int k = 0;k < 13;k++)
		for (int i = 0;i < 13;i++)
			for (int j = 0;j < 13;j++)graf[i][j] = min(graf[i][j], graf[i][k] + graf[k][j]);
}

int main() {
	int n;
	while (cin >> n, n) {
		for (int i = 0;i < 15;i++)
			for (int j = 0;j < 15;j++) {
				graf[i][j] = INF;
				if (i == j)graf[i][j] = 0;
			}
		
		for (int i = 0;i < n;i++) {
			int a, b,c;
			cin >> a >> b>>c;
			graf[a][b] = c;
			graf[b][a] = c;
		}

		warshall();
		int t, time=1e9;

		for (int i = 0;i < 10;i++) {
			int a=0;
			for (int j = 0;j < 10;j++) {
				if(graf[i][j]!=INF)a += graf[i][j];
			}
			if (time > a&&a!=0) {
				time = a;
				t = i;
			}
		}

		cout << t << ' ' << time << endl;
	}
	return 0;
}