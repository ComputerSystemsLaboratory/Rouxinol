#include<iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++ )
bool map[21][21];

int main(){
	int n, m;
	while( cin >> n, n ){
		rep(i,21) rep(j,21) map[i][j] = false;
		rep(i,n){
			int x,y;
			cin >> x >> y;
			map[x][y] = true;
		}
		int px=10, py=10;
		cin >> m;
		rep(i,m){
			char d;
			int r;
			cin >> d >> r;
			rep(j,r){
					 if(d=='N')	py++;
				else if(d=='E')	px++;
				else if(d=='S')	py--;
				else if(d=='W')	px--;
				map[px][py] = false;
			}
		}
		bool comp=true;
		rep(i,21) rep(j,21) if( map[i][j] ) comp=false;
		cout << (comp?"Yes":"No") << endl;
	}
	return 0;
}