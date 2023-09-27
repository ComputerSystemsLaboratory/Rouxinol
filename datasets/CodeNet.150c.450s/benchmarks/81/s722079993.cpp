#include <iostream>
#include <algorithm>

#define rep(i,n)    for(int i=0;i<n;i++)
#define INF         ( 1<<20 )

using namespace std;

int costs[11][11];

int main()
{
	int N;
	while(cin>>N,N)
	{
		rep(i,11)rep(j,11)costs[i][j]=INF;
		rep(i,11)costs[i][i]=0;

		int n_city = 0;
		rep(i,N)
		{
			int a, b, c;
			cin>>a>>b>>c;
			costs[a][b] = costs[b][a] = c;
			n_city = max(n_city, max(a, b));
		}
		n_city++;

		rep(k,n_city)rep(i,n_city)rep(j,n_city)
		{
			costs[i][j] = min(costs[i][j], costs[i][k] + costs[k][j]);
		}

		int min_cost = INF, min_city = -1;
		rep(i,n_city)
		{
			int sum = 0;
			rep(j,n_city) sum += costs[i][j];
			if (sum < min_cost)
			{
				min_cost = sum;
				min_city = i;
			}
		}
		cout << min_city << " " << min_cost << endl;
	}
	return 0;
}