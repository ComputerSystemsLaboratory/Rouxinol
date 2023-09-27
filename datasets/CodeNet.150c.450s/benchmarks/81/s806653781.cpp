#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 1e+9;

int main(){
	int n;
	while( cin >> n , n ){
		int d[11][11], v=0, s[11]={0};
		
		for(int i=0 ; i < 11 ; i++ ){
			for(int j=0 ; j < 11 ; j++ ){
				d[i][j] = (i==j)? 0 : INF;
			}
		}
		for(int i=0 ; i < n ; i++ ){
			int a,b,c;
			cin >> a >> b >> c;
			d[a][b] = c;
			d[b][a] = c;
			v = max( max( v , a ) , b );
		}

		for(int k=0 ; k <= v ; k++ ){
			for(int i=0 ; i <= v ; i++ ){
				for(int j=0 ; j <= v ; j++ ){
					d[i][j] = min( d[i][j] , d[i][k]+d[k][j] );
				}
			}
		}

		int ans = INF;
		for(int i=0 ; i <= v ; i++ ){
			int cost = 0;
			for(int j=0 ; j <= v ; j++ ){
				cost += d[i][j];
			}
			s[i] = cost;
			ans = min( ans , cost );
		}
		for(int i=0 ; i <= v ; i++ ){
			if( s[i] == ans ){
				cout << i << " " << ans << endl;
				break;
			}
		}
	}
}

