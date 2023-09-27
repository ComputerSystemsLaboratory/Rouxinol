
#include <bits/stdc++.h>

using namespace std;
#define CLOCK_START double start_t = clock();
#define CLOCK_STOP cout << "Took: " << ((clock() - start_t) / CLOCKS_PER_SEC);
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define ii pair<int,int>
#define vi vector<int>
#define CLR(a, x) memset( a, x, sizeof( a ) )
#define LL long long
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a; i<b; i++)

int main()
{
	int N,M; cin>>N>>M;
	vector<int> vt;int i=0;
	while(i<M)
	{
		int x; cin>>x;
		vt.push_back(x);
		i++;
	}
	sort(vt.begin(), vt.end());
	vector<int> DP(N+1,INT_MAX);
	DP[0]= 0;	
	for(int i=0; i<=N; i++)
	{
		for(int j=0; j<M && vt[j]<=i; j++)
		{
			DP[i] = min(DP[i],1+DP[i-vt[j]]);
		}
	}
	cout<<(DP[N]!=INT_MAX?DP[N]:-1)<<"\n";
	return 0;
}