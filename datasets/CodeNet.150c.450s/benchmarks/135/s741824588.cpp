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
 
int n,m;
ll ans;
int wide[1500001],hight[1500001];
int w[1505],h[1505];
 
void enumerate_hight(){
  int sum;
  for(int i=0;i<n;i++){
    sum=0;
    for(int j=i;j<n;j++){
      sum+=h[j];
      hight[sum]++;
    }
    h[i]=0;
  }
}

void enumerate_wide(){
  int sum;
  for(int i=0;i<m;i++){
    sum=0;
    for(int j=i;j<m;j++){
      sum+=w[j];
      wide[sum]++;
    }
    w[i]=0;
  }
}

void solve(){
  ll max_w=0,max_h=0,mini;
  ans=0;
  for(int i=0;i<n;i++){scanf("%d",&h[i]);max_h+=h[i];}
  for(int i=0;i<m;i++){scanf("%d",&w[i]);max_w+=w[i];}
  mini=min(max_w,max_h);
  rep(i,mini+1)wide[i]=hight[i]=0;
  enumerate_hight();
  enumerate_wide();
  rep(i,mini+1){ans+=wide[i]*hight[i];}
  cout<<ans<<endl;
}
 
int main(){
  while(scanf("%d%d",&n,&m)){
    if(n==0&&m==0)break;
    solve();
  }
}