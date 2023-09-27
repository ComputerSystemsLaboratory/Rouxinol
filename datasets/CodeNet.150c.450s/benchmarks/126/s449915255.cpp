#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <list>
#include <numeric>
#include <utility>
#include <ctime>
#define INF 100000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair
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

int a,b;
int dp[20][20];
bool no[20][20];

void init(){
  rep(i,20){
    rep(j,20){
      dp[i][j]=no[i][j]=0;
    }
  }
}

void DP(){
  REP(i,1,a+1){
    REP(j,1,b+1){
      if(no[i][j])dp[i][j]=0;
      else if(i==1&&j==1)dp[i][j]=1;
      else dp[i][j]=dp[i-1][j]+dp[i][j-1];
    }
  }
}

int main(){
  int n,x,y;
  while(1){
    scanf("%d%d",&a,&b);
    if(a==0&&b==0)break;
    init();
    cin>>n;
    rep(i,n){
      scanf("%d%d",&x,&y);
      no[x][y]=true;
    }
    DP();
    cout<<dp[a][b]<<endl;
  }
  return 0;
}