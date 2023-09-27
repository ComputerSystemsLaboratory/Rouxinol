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
#include <bitset>
#include <map>
#include <unordered_map>
#include <ctime>
#include <list>
#include <numeric>
#include <utility>
#include <ctime>
#define INF 1000000000
#define LINF 9000000000000000000
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
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
int ddx[8]={-1,-1,0,1,1,1,0,-1};
int ddy[8]={0,1,1,1,0,-1,-1,-1};
bool debug=false;

/*---------------------------------------------------*/

int dp[1000005],odd_dp[1000005];
vector<int> pol;

void init(){
  REP(i,1,1000){
    int num=i*(i+1)*(i+2)/6;
    if(num>1000000)break;
    pol.pb(num);
    //cout<<num<<endl;
  }
  rep(i,1000005)dp[i]=odd_dp[i]=i;
}

void DP(){
  bool ok;
  REP(i,1,pol.size()){
    ok=true;
    for(int j=pol[i];j<1000005;j++){
      if(j-dp[i]>=0)dp[j]=min(dp[j],dp[j-pol[i]]+1);
      if(pol[i]%2)if(j-odd_dp[i]>=0)odd_dp[j]=min(odd_dp[j],odd_dp[j-pol[i]]+1);
    }
  }
}

int main(){
  init();
  DP();
  int n;
  while(cin>>n,n){
    cout<<dp[n]<<" "<<odd_dp[n]<<endl;
  }
  return 0;
}

