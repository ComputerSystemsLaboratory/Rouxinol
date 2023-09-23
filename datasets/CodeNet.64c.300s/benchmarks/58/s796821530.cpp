#define	_USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
#include <complex>
#include <utility>
#include <numeric>
#define  rep(i,n) for(int i=0;i<(n);i++)
#define  REP(i,a,n) for(int i=a;i<(n);i++)
#define  rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define  VI	vector<int>
#define	 VS vector<string>
#define  all(a) (a).begin(),(a).end()
#define  debug(x) cout<<#x<<": "<<x<<endl
using namespace std;
typedef pair<int,int> P;
typedef long long ll;

const int INF=1000000;
char fi[101][101];
int d[21][21];
int N,M;
int sx,sy;
int gx,gy;
int w,h;
int ans;

int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
const int MAX_V=100;
const int MAX_N=100;
char o[3]={'+','-','*'};
bool f;



void solve(int x, int y,char op){
	if(x<0||x>=w||y<0||y>=h||op!=fi[y][x])
		return ;
	fi[y][x]='.';
	solve(x+1,y,op);
	solve(x,y+1,op);
	solve(x-1,y,op);
	solve(x,y-1,op);
}
int main(){
	
	while(cin>>h>>w,w!=0&&h!=0){
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
		cin>>fi[i][j];
		}
	}
		ans=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(fi[i][j]=='@'||fi[i][j]=='#'||fi[i][j]=='*'){
			solve(j,i,fi[i][j]);
				ans++;
				}
		}
		}
		cout<<ans<<endl;
	}

	
}