#include <iostream>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

using namespace std;

int main(void){
	int root[16][16];
	int a,b,n;
	while(cin >> a >> b, a|b){
		cin >>n;
		REP(y,b)
			REP(x,a)
				root[x][y]=0;
		REP(i,n){
			int x,y;
			cin >> x >> y;
			root[x-1][y-1]=-1;
		}
		root[0][0]=1;
		REP(y,b)
			REP(x,a)
				if(root[x][y]!=-1){
					if(root[x-1][y]!=-1&&x)
						root[x][y]+=root[x-1][y];
					if(root[x][y-1]!=-1&&y)
						root[x][y]+=root[x][y-1];
				}
		cout << root[a-1][b-1] << endl;
	}
	return 0;
}