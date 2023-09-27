

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
 
int w,h;
int island[200][200];
int c=0;
bool searched[200][200];

int dx[8]={0,1,0,-1,1,1,-1,-1};
int dy[8]={1,0,-1,0,1,-1,1,-1};

void search(int x,int y){ 
  searched[x][y] = true;
  //island[i][j]==1?????????
  REP(i,8){
	int nx=x+dx[i]; int ny=y+dy[i];
	if(nx<0||ny<0||nx>h-1||ny>w-1) continue;
	//cout << nx << " " << ny << endl;
	if(island[nx][ny]&&searched[nx][ny]==false){
	  search(nx,ny);
	}
  }
}

int main(){

  while(1){
	c = 0;
	cin >> w >> h;

	if(w==0&&h==0) break;
	REP(i,h){
	  REP(j,w){
		searched[i][j] = false;
		cin >> island[i][j];
	  }
	}

	REP(i,h){
	  REP(j,w){
		if(island[i][j]&&searched[i][j]==false){
		  search(i,j);
		  c++;
		}

	  }}

	cout << c <<endl;

  }


}