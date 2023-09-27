#include <iostream>
#include <complex>
#include <vector>
#include <string>
using namespace std;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int main(){
	int n, m, xi, yi, a;
	char c, f[256];
	f['N'] = 0;
	f['S'] = 1;
	f['E'] = 2;
	f['W'] = 3;
	
	while( cin >> n , n ){
		vector< complex<int> > vc;
		char field[21][21] = {0};
		int x = 10;
		int y = 10;
		
		for(int i=0 ; i < n ; i++ ){
			cin >> xi >> yi;
			field[yi][xi] = 1;
		}
		cin >> m;
		for(int i=0 ; i < m ; i++ ){
			cin >> c >> a;
			for( ; a-- ; ){
				x += dx[ f[c] ];
				y += dy[ f[c] ];
				if( field[y][x] == 1 ){
					n--;
					field[y][x] = 0;
				}
			}
		}
		cout << ( ( n == 0 )? "Yes" : "No" ) << endl;
	}
}