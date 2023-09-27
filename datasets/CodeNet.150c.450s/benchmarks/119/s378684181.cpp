#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;

int chizu[51][51];

void labeling(int y,int x,int w,int h){
	chizu[y][x]=0;
	REP(dy,-1,2){
		REP(dx,-1,2){
			if(0 <= y+dy && y+dy < h && 0 <= x+dx && x+dx < w){
				if(chizu[y+dy][x+dx]){
					labeling(y+dy,x+dx,w,h);
				}
			}
		}
	}
}

int main(){
	int w,h;
	while(cin>>w>>h&&w&&h){

		int count=0;
		REP(i,0,h){
			REP(j,0,w){
				cin>>chizu[i][j];
			}
		}
		REP(i,0,h){
			REP(j,0,w){
				if(chizu[i][j]){
					count++;
					labeling(i,j,w,h);
				}
			}
		}

		p(count);
	}
	return 0;
}