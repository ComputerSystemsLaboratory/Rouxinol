#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;


#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

int h,w;

int c[52][52];

int cnt;
int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};


void dfs(int i,int j);



int main(){


	while(1){
		cin >> w >> h;

		if(h==0 && w == 0){
			break;
		}

		cnt=0;

		REP(i,h){
			REP(j,w){


				cin >> c[i][j] ;

			}
		}

		REP(i,h){
			REP(j,w){

				//cnt++??????????????\???????????????????????\???????????????
				if(c[i][j] == 1){
					cnt++;
					dfs(j,i);
				}
			}
		}

		cout << cnt << endl;
	}
	return 0;
}

void dfs(int i,int j){

	if(c[j][i] == 1){

		c[j][i] = 0;
		REP(k,8){
			//w???<=???????????£??????????????????
			if(0 <= i+dx[k] && i+dx[k] < w && 0 <= j+dy[k] && j+dy[k] < h){

				dfs(i+dx[k],j+dy[k]);
			}
		}
	}
}