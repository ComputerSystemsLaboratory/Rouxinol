#include<iostream>
#include<limits.h>
using namespace std;
int n,m;
const int MAX = 50;
const int MAXN = 100000; 
const int INF = INT_MAX;
int C[MAX];
int T[MAXN];


void solve()
{
	for(int i = 1; i <= m; i++)
		for(int j = C[i]; j <= n; j++)
		{
			T[j] = min(T[j],T[j-C[i]]+1);
		}
	cout <<	T[n]<<endl;
}

int main()
{
	
	cin >> n >> m;
	for(int i = 1 ; i <= m; i++)
		cin >> C[i];	
	
	for(int i = 1 ; i <= n; i++)
		T[i] = INF;
	T[0] = 0;
	solve();

}