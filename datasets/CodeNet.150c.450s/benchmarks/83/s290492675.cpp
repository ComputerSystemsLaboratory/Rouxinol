#include<iostream>
#include<algorithm>
using namespace std;
const int MAXN = 200;
const int MAXW = 20000;
int T[MAXN][MAXW];

int W,N;
int M[MAXN]; int V[MAXN];



void solve()
{
	for(int i = 1; i <= N; i++)
		for(int j = 1; j<= W; j++)
		{
			if(j<M[i])
				T[i][j] = T[i-1][j];
			else
				T[i][j] = max(T[i-1][j],T[i-1][j-M[i]]+V[i]);
		}
	cout << T[N][W]<<endl;
}

int main()
{
	
	cin >> N >> W;
	fill(*T,*(T)+W+1,0);
	for(int i = 1; i <= N; i++)
		cin >> V[i] >> M[i];

	solve();
}