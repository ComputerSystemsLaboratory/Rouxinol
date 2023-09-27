#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
#define INF 0xfffffff
typedef long long int lli;
typedef pair<lli,lli> P;
lli ans,sgx[10],sgy[10],w,h,n,dtmp[1000][1000],d[1000][1000],sx,sy,gx,gy,nx,ny;
lli dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
char s[1001];
queue <P> que;
int main()
{
	scanf("%lld %lld %lld",&h,&w,&n);
	for(int i=0;i<h;i++){
		scanf("%s",s);
		for(int j=0;j<w;j++){
			if(s[j]=='X') dtmp[i][j]=-1;
			if(s[j]=='.') dtmp[i][j]=INF;
			if('1'<=s[j]&&s[j]<='9'){
				dtmp[i][j]=INF;
				sgx[s[j]-'0']=j;
				sgy[s[j]-'0']=i;
			}
			if(s[j]=='S'){
				dtmp[i][j]=INF;
				sgx[0]=j;
				sgy[0]=i;
			}
		}
	}
	for(int i=0;i<n;i++){
		while(!que.empty()) que.pop();
		for(int j=0;j<h;j++) for(int k=0;k<w;k++) d[j][k]=dtmp[j][k];
		sx=sgx[i];
		sy=sgy[i];
		gx=sgx[i+1];
		gy=sgy[i+1];
		d[sy][sx]=0;
		que.push(P(sx,sy));
		while(1){
			P p=que.front();
			que.pop();
			nx=p.first;
			ny=p.second;
			for(int j=0;j<4;j++){
				if(0<=nx+dx[j]&&0<=ny+dy[j]&&nx+dx[j]<w&&ny+dy[j]<h&&d[ny+dy[j]][nx+dx[j]]>d[ny][nx]+1){
					d[ny+dy[j]][nx+dx[j]]=d[ny][nx]+1;
					if(nx+dx[j]==gx&&ny+dy[j]==gy){
						ans+=d[ny+dy[j]][nx+dx[j]];
						goto next;
					}
					que.push(P(nx+dx[j],ny+dy[j]));
				}
			}
		}
		next: ;
	}
	printf("%lld\n",ans);
}