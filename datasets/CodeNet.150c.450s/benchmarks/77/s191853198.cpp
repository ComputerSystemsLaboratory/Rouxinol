#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, m;
	int f[256];
	f['N'] = 0;
	f['E'] = 1;
	f['S'] = 2;
	f['W'] = 3;
	int dx[4] = {0,1,0,-1};
	int dy[4] = {1,0,-1,0};
	
	while( cin >> n , n ){
		int px = 10, py = 10, cnt=0;
		int s[21][21] = {0};
		
		for(int i=0 ; i < n ; i++ ){
			int x, y;
			cin >> x >> y;
			s[y][x] = 1;
		}

		if( s[py][px] == 1 ){
			cnt++;
			s[py][px] = 0;
		}
		
		cin >> m ;
		for(int i=0 ; i < m ; i++ ){
			string d;
			int l;
			cin >> d >> l;
			for(int k=0 ; k < l ; k++ ){
				px = px + dx[ f[d[0]] ];
				py = py + dy[ f[d[0]] ];
				if( s[py][px] == 1 ){
					cnt++;
					s[py][px] = 0;
				}
			}
		}
		if( cnt == n ){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}