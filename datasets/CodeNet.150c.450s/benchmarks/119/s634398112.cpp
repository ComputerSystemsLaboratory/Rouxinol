#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define int ll

#define FOR(i,a,b) for(int i=int(a);i<int(b);i++)
#define REP(i,b) FOR(i,0,b)

int read(){
	int i;
	scanf("%lld",&i);
	return i;
}

int land[100][100]={0};
int dy[]={-1,-1,-1,0,0,1,1,1};
int dx[]={-1,0,1,-1,1,-1,0,1};
int cnt=0;

void isLand(int i,int j){
    if(land[i][j]==1){
    	land[i][j] = 0;
		REP(k,8){
			int newy=i+dy[k];
			int newx=j+dx[k];
			isLand(newy,newx);
		}
    }
}

signed main(){
	int w,h;
	while( w=read(),h=read(),w||h){
		cnt=0;
		
		REP(i,100){
			REP(j,100){
				land[i][j]=0;
			}
		}
		FOR(i,1,h+1){
			FOR(j,1,w+1){
				land[i][j]=read();
			}
		}
		
		FOR(i,1,h+1){
			FOR(j,1,w+1){
				if(land[i][j]==1){
					cnt++;
					isLand(i,j);
				}
			}
		}
		
		cout << cnt << endl;
	}
	
}