#include<iostream>
#include<cctype>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cctype>
#include<cstring>
#include<utility>
#include<cmath>
const int inf=0x7fffffff;
typedef long long int ll;
using namespace std;
typedef pair<int, int > point;
const int N=100+10;
char A[N][N];
bool V[N][N];
int h,w;
char s[N];
int mov[][4] ={
	-1,1,0,0,
	0,0,-1,1
};
void solve(){
	char tmp;
	int cnt=0;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			if(!V[i][j]){
				V[i][j]=1;
				tmp=A[i][j];
				cnt++;
				queue<point>q;
				q.push(make_pair(i,j));
				while(q.size()){
					point p=q.front();
					q.pop();
					for(int k=0;k<4;k++){
						int x=p.first+mov[0][k];
						int y=p.second+mov[1][k];
						if(!V[x][y]&&A[x][y]==tmp){q.push(make_pair(x,y));
							V[x][y]=1;
						}
					}
				}

			}
			else continue;
		}
	}
	printf("%d\n",cnt);
}
int main()
{
//#ifdef DEBUG
//	freopen("in", "r", stdin);
////	freopen("out", "w", stdout);
//#endif
	while(scanf("%d%d",&h,&w)!=EOF&&w&&h){
		memset(A,-1,sizeof(A));
		memset(V,0,sizeof(V));
		for(int i=1;i<=h;i++){
			scanf("%s", s);
			for(int j=1;j<=w;j++){
				A[i][j]=s[j-1];
				V[i][j]=0;
			}
		}
		solve();
	}
	//insert code above
	return 0;
}
//aoj0118.cc
//generated automatically at Thu Sep  8 16:14:59 2016
//by xsthunder