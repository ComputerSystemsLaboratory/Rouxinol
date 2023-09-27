#include<bits/stdc++.h>
#define si( x ) scanf("%d", &x)
#define sll( x ) scanf("%lld", &x)
#define mp make_pair
#define pb push_back
#define INF 1e18
using namespace std;

typedef pair < int , int > pii;
typedef long long ll;

ll dis[101][101];
int n, m;

int main( int argc, char *argv[] )
{
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) for(int j = 0 ; j < n ; j++){
		if(i == j) dis[i][i] = 0;
		else dis[i][j] = INF;
	}
	
	for(int i = 0 ; i < m ; i++){
		int _a, _b, _w;
		cin >> _a >> _b >> _w;
		dis[_a][_b] = _w;
	}
	
	for(int k = 0 ; k < n ; k++){
		for(int i = 0 ; i < n ; i++) for(int j = 0 ; j < n ; j++){
			dis[i][j] = min( dis[i][j], dis[i][k] + dis[k][j] );
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		if( dis[i][i] < 0 ) return !printf("NEGATIVE CYCLE\n");
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if( j ) printf(" ");
			if( dis[i][j] > 2e9 ){
				printf("INF");
			}
			else printf("%d", dis[i][j]);
		}
		printf("\n");
	}
}

