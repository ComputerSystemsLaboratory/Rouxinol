#include <iostream>
#include <algorithm>
using namespace std;

int dfs( int, int, int );

int BallData[10];

int main()
{

	int N, ans;

	cin >> N;

	for( int i = 0; i < N; i++ ) {
		for( int j = 0; j < 10; j++ ) {
		
			cin >> BallData[j];

			ans = dfs(0, 0, 0);

		}

		if ( ans == 0 ) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}

	}
	
	return 0;

}

int dfs( int i, int Left, int Right )
{

	int ans = 0;

	if( i == 10 ) ans = 1;

	if( BallData[i] > Left ) {
		ans = dfs( i + 1, BallData[i], Right );	
	}
	if( BallData[i] > Right ) {
		ans = dfs( i + 1, Left, BallData[i] );
	}

	return ans;

}