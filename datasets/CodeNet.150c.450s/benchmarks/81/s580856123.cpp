#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_V = 10;
const int INF = 1 << 29;
const int MAX_N = 45;

int d[MAX_V + 1][MAX_V + 1];

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	while(1){
		int n;
		cin >> n;
		if(n == 0) break;
		
		for(int i = 0; i != MAX_V; ++i){
			for(int j = 0; j != MAX_V; ++j){
				d[i][j] = INF;
				if(i == j)
					d[i][j] = 0;
			}
		}
		
		int v = 0;
		for(int i = 0; i != n; ++i){
			int a, b, c;
			cin >> a >> b >> c;
			v = max({a + 1, b + 1, v});
			d[a][b] = c;
			d[b][a] = c;
		}
		//cout << v << endl;
		//cout << INF*2 << endl;
		
		for(int k = 0; k != v; ++k){
			for(int i = 0; i != v; ++i){
				for(int j = 0; j != v; ++j){
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
					//cout << d[i][j] << endl;
				}
			}
		}
		
		int m = INF;
		int now = -1;
		for(int i = 0; i != v; ++i){
			int sum = 0;
			for(int j = 0; j != v; ++j){
				sum += d[i][j];
			}
			if(m > sum){
				m = sum;
				now = i;
			}
			//cout << sum << endl;
		}
		
		cout << now << " " << m << endl;
	}
	return 0;
}