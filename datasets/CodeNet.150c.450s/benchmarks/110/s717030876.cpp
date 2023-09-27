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
int h,w,n;
char data[1100][1100];
int tesu[1100][1100];
int chx[10];
int chy[10];

bool inrange(int x,int y){
	if(x<0||y<0||x>h-1||y>w-1) return false;
	else return true;
}
queue<int> qx;
queue<int> qy;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int bfs(int chnum){
	while(!qx.empty()){
		int sx = qx.front();
		int sy = qy.front();
		qx.pop(); qy.pop();
		REP(i,4){
			int nx = sx + dx[i];
			int ny = sy + dy[i];
			if(!inrange(nx,ny)) continue;
			if(data[nx][ny]!='X'){
				if(tesu[nx][ny]==-1||tesu[nx][ny]>tesu[sx][sy]+1){
					tesu[nx][ny] = tesu[sx][sy]+1;
					qx.push(nx);
					qy.push(ny);
				}
				if(data[nx][ny]==(chnum+'0')){
					return tesu[nx][ny];
				}
			}
		}
	}
	return -1;
}

int main(){
	cin >> h >> w >> n;
	REP(i,h){
		string tmp;
		cin >> tmp;
		REP(j,tmp.size()) {
			data[i][j] = tmp[j];
			if(data[i][j] == 'S'){
				chx[0] = i;
				chy[0] = j;
			}
			if('1'<=data[i][j]&&data[i][j]<='9'){
				chx[data[i][j]-'0'] = i;
				chy[data[i][j]-'0'] = j;
			}
		}
	}
	ll int ans = 0;
	FOR(i,0,n){
		REP(j,1100) REP(k,1100) tesu[j][k] = -1;
		qx.push(chx[i]);
		qy.push(chy[i]);
		tesu[chx[i]][chy[i]] = 0;
		ans += bfs(i+1);
		while(!qx.empty()) qx.pop();
		while(!qy.empty()) qy.pop();
	}
	/*FOR(i,0,n+1){
		cout << chx[i] << " " << chy[i] << endl;
	}
	REP(i,h){
		REP(j,w) cout << tesu[i][j] << " ";
		cout << endl;
	}*/
	cout << ans << endl;
}