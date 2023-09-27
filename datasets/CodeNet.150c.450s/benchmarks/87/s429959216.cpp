#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <ctime>
#define INF 999999999
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define MOD(x) (x%(mod))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;
/*---------------------------------------------------*/

const int none=0;

int p[15][6];
int n;

void debug_print(){
  cout<<endl;
  rep(i,n){
    rep(j,5)cout<<p[i][j]<<" ";
    cout<<endl;
  }
}

void init(){
  rep(i,n)rep(j,5)p[i][j]=none;
}

void fall(){
  for(int j=0;j<5;j++){
    for(int i=n-1;i>=1;i--){
      for(int k=n-1;k>=1;k--)if(p[k][j]==none)swap(p[k][j],p[k-1][j]);
    }
  }
}

void vanishment(pi vanish,int i){
  bool ok=false;
  rep(j,5){
    if(vanish.first==p[i][j]&&vanish.first==p[i][j+1])ok=true;
    if(vanish.second!=0&&p[i][j]==vanish.first&&ok){
      p[i][j]=none;
      vanish.second--;
    }
  }
}

void solve(){
  pi vanish;
  int score=0;
  bool ok=true;
  while(ok){
    ok=false;
    rep(i,n){
      vanish.first=p[i][0];vanish.second=1;
      REP(j,1,5){
	if(p[i][j]==vanish.first&&p[i][j]!=none)vanish.second++;
	else if(vanish.second<=2){vanish.first=p[i][j];vanish.second=1;}
	else if(p[i][j]!=vanish.first&&vanish.second>=3)break;
      }
      if(vanish.second>=3){
	ok=true;
	score+=vanish.first*vanish.second;
	vanishment(vanish,i);
	if(debug)cout<<"score: "<<score<<endl;
      }
    }
    if(debug)cout<<"before";
    if(debug)debug_print();
    fall();
    if(debug)cout<<"after";
    if(debug)debug_print();
  }
  cout<<score<<endl;
}

int main(){
  while(cin>>n){
    if(n==0)break;
    init();
    rep(i,n)rep(j,5)cin>>p[i][j];
    solve();
  }
}