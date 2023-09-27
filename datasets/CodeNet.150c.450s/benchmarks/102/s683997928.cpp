/*
 * red_and_black.cpp
 *
 *  Created on: 2017/02/10
 *      Author: Nishio
 */

#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
#define mp(a,b) make_pair(a,b)
using namespace std;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int main(){
	int H,W;

	while(cin>>W>>H&&W){
		queue<pair<int,int>> q;
		bool dp[21][21]={false};
		int nowx,nowy,nextx,nexty,count=1;
		char c[21][21];
		REP(i,0,H){
			REP(j,0,W){
				cin>>c[i][j];
				if(c[i][j]=='@'){
					dp[i][j]=true;

					q.push(mp(i,j));
				}
			}
		}
		while(!q.empty()){
			nowy=q.front().first;
			nowx=q.front().second;
			q.pop();
			REP(i,0,4){
				nextx=nowx+dx[i];
				nexty=nowy+dy[i];
				if(0<=nextx && nextx<W && 0<=nexty &&nexty<H){
					if(!dp[nexty][nextx]&&c[nexty][nextx]=='.'){
						dp[nexty][nextx]=true;
						q.push(mp(nexty,nextx));
						count++;
					}
				}
			}
		}
		p(count);
	}
	return 0;
}