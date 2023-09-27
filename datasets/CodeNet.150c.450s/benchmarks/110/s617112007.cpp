#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <map>
#include <list>
#include <set>
#include <numeric>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <climits>
#include <cfloat>
#include <ctime>
#include <complex>
#include <cassert>
#include <iomanip>
using namespace std;
typedef long long LL;
typedef pair<int,int> P;

char in[1001][1002];
char done[1001][1002];
int dist[1001][1002];
int H,W,N;
int main() {
	int a=0,b=0;
	cin >> H >> W >> N;
	for(int i=1;i<=H;i++){
		cin >> (in[i]+1);
		for(int j=1;j<=W;j++){
			if(in[i][j]=='S'){
				a=i;
				b=j;
			}
		}
	}
	int ret=0;
	for(int t=1;t<=N;t++){
		queue<P> q;
		q.push(P(a,b));
		done[a][b]=t;
		dist[a][b]=0;
		bool found=false;
		while(!found){
			int i=q.front().first;
			int j=q.front().second;
			q.pop();
			int dx[]={0,-1,0,1};
			int dy[]={-1,0,1,0};
			for(int k=0;k<4;k++){
				int x=i+dx[k];
				int y=j+dy[k];
				if(in[x][y]!=0&&in[x][y]!='X'&&done[x][y]<t){
					done[x][y]=t;
					dist[x][y]=dist[i][j]+1;
					q.push(P(x,y));
					if(in[x][y]==t+'0'){
						a=x;
						b=y;
						ret+=dist[x][y];
						found=true;
						break;
					}
				}
			}
		}
	}
	cout << ret << endl;

}