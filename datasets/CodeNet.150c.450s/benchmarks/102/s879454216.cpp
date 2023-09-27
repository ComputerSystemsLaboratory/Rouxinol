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
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
#define pii pair<int,int>
#define mp make_pair
#define pi 3.14159265359
#define shosu(X) fixed << setprecision(X)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

char grid[100][100];
int w,h;
int ans=0;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
bool searched[100][100];
int a=0,b=0;

bool inrange(int x,int y){
  if(x<0||y<0||x>=h||y>=w) return false;
  else return true;
}

void search(int x,int y){
  if((grid[x][y]=='.'||grid[x][y]=='@')&&searched[x][y]==false&&inrange(x,y)){
	searched[x][y]=true;
	ans++;
	//	cout <<x <<' '<<y << endl;
	  REP(i,4) {
	  search(x+dx[i],y+dy[i]);
	}
  }
}

int main(){
  while(1){
	cin >> w >> h;
	if(w==0&&h==0) break;
	ans = 0;
	REP(i,h){
	  REP(j,w){
		cin >> grid[i][j];
		searched[i][j]=false;
		if(grid[i][j]=='@'){
		  a=i;
		  b=j;
		}
	  }
	}
	search(a,b);

	cout<<ans<<endl;
  }
}