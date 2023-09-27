#include <iostream>
#include <list>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define F first
#define S second
using namespace std;

int main(void){
	int n,m;
	while(cin >> n,n){
		bool field[21][21]={false};
		pair<int,int> P[20];
		REP(i,n){
			int x,y;
			cin >> x >> y;
			P[i].F=x,P[i].S=y;
		}
		int x=10,y=10;
		cin >> m;
		REP(i,m){
			char dir;
			int num;
			cin >> dir;
			if(dir=='N'){
				cin >> num;
				REP(j,num)
					y++,field[x][y]=true;
			}else if(dir=='W'){
				cin >> num;
				REP(j,num)
					x--,field[x][y]=true;
			}else if(dir=='S'){
				cin >> num;
				REP(j,num)
					y--,field[x][y]=true;
			}else if(dir=='E'){
				cin >> num;
				REP(j,num)
					x++,field[x][y]=true;
			}
		}
		bool ok=true;
		REP(i,n){
			if(!field[P[i].F][P[i].S])
				ok=false;
		}
		if(ok)
			cout << "Yes" << endl;
		else 
			cout << "No" << endl;
	}
	return 0;
}