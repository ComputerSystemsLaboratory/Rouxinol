#include <iostream>
#include <utility>
#define N 	100

using namespace std;

int T[N+1][N+1];
pair<int , int> M[N+1];
int t = 0;

void init(){
	for (int i = 0; i < 100; ++i)
	{
		M[i].first = 0;
		M[i].second = 0;
		for (int j = 0; j < 100; ++j)
		{
			T[i][j] = 0;
		}
	}
}

void DispTable(int n){
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			cout << T[i][j];
			if(j!=n) cout << " ";
		}
		cout << endl;
	}
}

void DispM(int n){
	for (int i = 1; i<=n; i++)
	{
		cout << i << " " << M[i].first << " " << M[i].second << endl;
	}
}

void dfs(int cur,int n){
	t++;
	M[cur].first = t;
	// cerr << "visiting " << cur << " " << t << endl;
	for (int i = 1; i <= n; ++i)
	{
		if(T[cur][i] == 1 && M[i].first == 0) dfs(i,n);
	}
	t++;
	M[cur].second = t;
}

int main(){
	int n;
	cin >> n;
	init();
	for (int i = 0; i < n; ++i)
	{
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; ++j)
		{
			int v;
			cin >> v;
			T[u][v] = 1;	
		}
	}
	// DispTable(n);
	dfs(1,n);
	for (int i = 2; i <= n; ++i)
	{
		if(M[i].first==0) dfs(i,n);
	}
	DispM(n);
	return 0;
}