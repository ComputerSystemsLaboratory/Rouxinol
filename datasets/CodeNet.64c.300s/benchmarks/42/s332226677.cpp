#include<iostream>
using namespace std;

int n;
int x[100],y[100];
int m;
char s[30];int l;

int main(){
	int i,j;
	
	while( cin >> n ){
		if( !n )break;
		for( i = 0; i < n; i++ ){
			cin >> x[i] >> y[i];
		}
		
		int befx = 10, befy = 10;
		int nowx = 10, nowy = 10;
		bool flag[100] = {false};
		cin >> m;
		for( i = 0; i < m; i++ ){
			cin >> s >> l;
			if( s[0] == 'N' ){
				nowy += l;
				for( j = 0; j < n; j++ ){
					if( nowx == x[j] && befy <= y[j] && y[j] <= nowy )
						flag[j] = true;
				}
			}
			if( s[0] == 'S' ){
				nowy -= l;
				for( j = 0; j < n; j++ ){
					if( nowx == x[j] && nowy <= y[j] && y[j] <= befy )
						flag[j] = true;
				}
			}
			if( s[0] == 'E' ){
				nowx += l;
				for( j = 0; j < n; j++ ){
					if( nowy == y[j] && befx <= x[j] && x[j] <= nowx )
						flag[j] = true;
				}
			}
			if( s[0] == 'W' ){
				nowx -= l;
				for( j = 0; j < n; j++ ){
					if( nowy == y[j] && nowx <= x[j] && x[j] <= befx )
						flag[j] = true;
				}
			}
			befx = nowx;
			befy = nowy;
		}
		for( i = 0; i < n; i++ ){
			if( flag[i] == false )
				break;
		}
		if( i < n )
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}