#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
const LL  INF = 10000000000;
const int V = 110;
const int E = 10000;
LL d[V][V];

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int v, e;
	cin >> v >> e;
	
	for(int i = 0; i < v; ++i){
		for(int j = 0; j < v; ++j){
			d[i][j] = INF;
		}
		d[i][i] = 0;
	}
	
	int a, b;
	LL c;
	for(int i = 0; i < e; ++i){
		cin >> a >> b >> c;
		d[a][b] = c;
	}
	
	for(int k = 0; k < v; ++k){
		for(int i = 0; i < v; ++i){
			for(int j = 0; j < v; ++j){
				if(d[i][k] != INF && d[k][j] != INF)
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	
	for(int i = 0; i < v; ++i){
		if(d[i][i] < 0){
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	}
	
	for(int i = 0; i < v; ++i){
		for(int j = 0; j < v; ++j){
			if(d[i][j] != INF)
				cout << d[i][j];
			else
				cout << "INF";
			if(j != v - 1)
				cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}