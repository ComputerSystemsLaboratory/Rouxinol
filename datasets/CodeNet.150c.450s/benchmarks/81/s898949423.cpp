#include<iostream>
#include<algorithm>
#include<vector>
const int INF = 1 << 20;
const int N = 11;
int tim[N][N];
using namespace std;
int main()
{
	int a, b, ti, n;
	while (1){
		cin >> n;
		if (n == 0)break;

		for (int i = 0; i < N; i++){
			for (int i2 = 0; i2 < N; i2++){
				if (i != i2){
					tim[i][i2] = INF;
				}
				else
					tim[i][i2] = 0;
			}
		}

		int m = 0;
		for (int i = 0; i < n; i++){
			cin >> a >> b >> ti;
			tim[a][b] = ti;
			tim[b][a] = ti;
			m = max(m, a);
			m = max(m, b);
		}

		for (int k = 0; k <= m; k++)
			for (int i = 0; i <= m; i++)
				for (int j = 0; j <= m; j++){
					tim[i][j] = min(tim[i][j], tim[i][k] + tim[k][j]);
				}

		int mint = INF;
		vector<int>p;
		p.clear();
		for (int i = 0; i <= m; i++){
			int mt = 0;
			for (int i2 = 0; i2 <= m; i2++){
					mt += tim[i][i2];
			}
			p.push_back(mt);
			mint = min(mt, mint);
		}

		for (int i = 0; i <= p.size(); i++){
			if (p[i] == mint){
				cout << i << " " << mint << endl;
				break;
			}
		}
	}
}