#include <iostream>
#include <climits>
#include <vector>
#include <numeric>

using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

const int INF = INT_MAX / 2;

struct Edge{
	int from, to, cost;

	Edge( int f, int t, int c ) : from( f ), to( t ), cost( c )
	{
		return;
	}
};

int main()
{
	cin.tie( 0 );
	ios::sync_with_stdio( false );

	while ( true )
	{
		int n;
		cin >> n;

		if ( !n )
		{
			break;
		}

		int V = 0;
		vector< Edge > E;

		for ( int i = 0; i < n; i++ )
		{
			int f, t, c;
			cin >> f >> t >> c;

			V = max( V, max( f, t ) );

			E.push_back( Edge( f, t, c ) );
		}

		V++;

		VVI G( V, VI( V, INF ) );

		for ( int i = 0; i < V; i++ )
		{
			G[i][i] = 0;
		}

		for ( int i = 0; i < n; i++ )
		{
			Edge &e = E[i];

			G[ e.from ][ e.to ] = e.cost;
			G[ e.to ][ e.from ] = e.cost;
		}

		for ( int k = 0; k < V; k++ )
		{
			for ( int i = 0; i < V; i++ )
			{
				for ( int j = 0; j < V; j++ )
				{
					G[i][j] = min( G[i][j], G[i][k] + G[k][j] );
				}
			}
		}

		int num, res = INT_MAX;

		for ( int i = 0; i < V; i++ )
		{
			int sum = accumulate( G[i].begin(), G[i].end(), 0 );

			if ( sum < res )
			{
				num = i;
				res = sum;
			}
		}

		cout << num << ' ' << res << endl;
	}	

	return 0;
}