#include <iostream>
using namespace std;

#define repi(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) for(int i=0;i<(n);i++)

int N, M;
int a[21][21];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	while(cin>>N,N) {
		rep(i, 21) {rep(j, 21)a[i][j]=false;}
		
		int x, y;
		rep(i, N) {
			cin>>x>>y;
			a[x][y] = true;
		}
		
		cin>>M;
		x=10;
		y=10;
		rep(i, M) {
			char d;
			int l;
			cin>>d>>l;
			rep(j, l) {
				switch(d) {
					case 'N':y++;break;
					case 'E':x++;break;
					case 'S':y--;break;
					case 'W':x--;break;
				}
				a[x][y]=false;
			}
		}
		
		bool f = true;
		rep(i, 21) {
			rep(j, 21) {
				if(a[i][j]) {
					f=false;
					break;
				}
			}
			if(!f)break;
		}
		cout<<(f?"Yes":"No")<<endl;
	}
	
	return 0;
}