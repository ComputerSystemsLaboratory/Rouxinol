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
int c[100][100];
bool notsearched[100][100];
int dx[8]={0,1,0,-1,1,1,-1,-1};
int dy[8]={1,0,-1,0,1,-1,1,-1};
int ans;

bool inrange(int x, int y){
  if(x<0||y<0||x>=h||y>=w){ 
	//cout << "false" <<endl;
	return false;
  }else{ 
	//cout << "true" << endl;
	return true;
  }
}

void search(int x, int y){

  if((notsearched[x][y])&&(c[x][y] == 1)&&(inrange(x,y))){
	notsearched[x][y]=false;

	REP(i,8) search(x+dx[i],y+dy[i]);
  }
}


int main(){
  while(1){

	REP(i,100){
	  REP(j,100){
		notsearched[i][j]=true;
	  }
	}

	cin >> w >> h;
	if (w==0&&h==0) break;
	ans=0;
	REP(i,h){
	  REP(j,w){
		cin >> c[i][j];

	  }
	}

	REP(i,h){
	  REP(j,w){
		if((notsearched[i][j])&&(c[i][j] == 1)&&(inrange(i,j))) ans++; 
		search(i,j);
	  }
	}
	cout << ans << endl;
  }
 
}