/*
 * hujx.cpp
 *
 *  Created on: 2015年5月21日
 *      Author: dell
 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<time.h>
#include<queue>
#include<stack>
#include<iterator>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#include<map>
#include<set>
//#define ONLINE_JUDGE
#define eps 1e-8
#define INF 0x7fffffff
#define FOR(i,a) for((i)=0;i<(a);(i)++)
#define MEM(a) (memset((a),0,sizeof(a)))
#define sfs(a) scanf("%s",a)
#define sf(a) scanf("%d",&a)
#define sfI(a) scanf("%I64d",&a)
#define pf(a) printf("%d\n",a)
#define pfI(a) printf("%I64d\n",a)
#define pfs(a) printf("%s\n",a)
#define sfd(a,b) scanf("%d%d",&a,&b)
#define sft(a,b,num) scanf("%d%d%d",&a,&b,&num)
#define for1(i,a,b) for(int i=(a);i<b;i++)
#define for2(i,a,b) for(int i=(a);i<=b;i++)
#define for3(i,a,b)for(int i=(b);i>=a;i--)
#define MEM1(a) memset(a,0,sizeof(a))
#define MEM2(a) memset(a,-1,sizeof(a))
#define ll __int64
const double PI=acos(-1.0);
template<class T> T gcd(T a,T b){return b?gcd(b,a%b):a;}
template<class T> T lcm(T a,T b){return a/gcd(a,b)*b;}
template<class T> inline T Min(T a,T b){return a<b?a:b;}
template<class T> inline T Max(T a,T b){return a>b?a:b;}
using namespace std;
//#pragma comment(linker,"/STACK:1024000000,1024000000")
int n,m,k;
#define M 110
#define N 500010
#define Mod 258280327
#define p(x,y) make_pair(x,y)
char ch[1010][1010];
int vis[1010][1010];
int posx[15];
int posy[15];
struct Node{
	int x,y;
	int step;
};
bool check(int x,int y){
	if(x<0 || x>=n || y<0 || y>=m || ch[x][y] == 'X' ||vis[x][y])
		return false;
	return true;
}
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int bfs(int stx,int sty,int edx,int edy){
	memset(vis,0,sizeof vis);
	queue<Node> q;
	Node cur,next;
	cur.x = stx;
	cur.y = sty;
	cur.step = 0;
	vis[cur.x][cur.y] = 1;
	q.push(cur);
	int ans;
	while(!q.empty()){
		cur = q.front();
		q.pop();
		if(cur.x == edx && cur.y == edy){
			ans = cur.step;
			break;
		}
		for(int i=0;i<4;i++){
			next = cur;
			next.x += dir[i][0];
			next.y += dir[i][1];
			next.step ++;
			if(!check(next.x,next.y)) continue;
			vis[next.x][next.y] = 1;
			q.push(next);
		}
	}
	return ans;
}
int main(){
	while(scanf("%d%d%d",&n,&m,&k)!=EOF){
		for(int i=0;i<n;i++)
			sfs(ch[i]);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(ch[i][j] == 'S'){
					posx[0]=i;
					posy[0]=j;
				}
				if(ch[i][j]>='1' && ch[i][j]<='9'){
					posx[ch[i][j]-'0'] = i;
					posy[ch[i][j]-'0'] = j;
				}
			}
		}
		int ans=0;
		for(int i=0;i<k;i++){
			ans += bfs(posx[i],posy[i],posx[i+1],posy[i+1]);
		}
		printf("%d\n",ans);
	}
    return 0;
}