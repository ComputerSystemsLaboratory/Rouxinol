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
#include <utility>
#include <ctime>
#define INF 999999999
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
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

int main(){
  int x,y,s;
  queue<pi> data;
  while(scanf("%d%d%d",&x,&y,&s)){
    if(x==0&&y==0&&s==0)break;
    int ans=-INF;
    rep(i,s+1){
      rep(j,s+1){
	if(i*(100+x)/100+j*(100+x)/100==s&&i!=0&&j!=0){
	  ans=max(ans,i*(100+y)/100+j*(100+y)/100);
	}
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}