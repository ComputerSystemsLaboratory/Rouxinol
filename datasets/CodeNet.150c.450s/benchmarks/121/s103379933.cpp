#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

char data[110][110];
int h,w;

bool inrange(int x,int y){
	if(x<0||y<0||x>h-1||y>w-1) return false;
	else return true;
}

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
void dfs(int x,int y,char mark){
	data[x][y] = '0';
	REP(i,4){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(!inrange(nx,ny)) continue;
		if(data[nx][ny]==mark){
			dfs(nx,ny,mark);
		}
	}
}

int main(){
	while(1){
		cin >> h >> w;
		string tmp;
		if(h==0&&w==0) break;
		REP(i,h){
			cin >> tmp;
			REP(j,w) data[i][j] = tmp[j];
		}
		ll int cnt = 0;
		REP(i,h){
			REP(j,w){
				if(data[i][j]!='0'){
					cnt++;
					dfs(i,j,data[i][j]);
				}
			}
		}
		cout << cnt << endl;
	}
}