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
#define INF 1000000000
#define mod 1000000007
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),x.end()
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;

int a[11];

int dfs(int left,int right,int cnt){
  //cout<<left<<" "<<right<<" "<<cnt<<endl;
  if(cnt==10)return cnt;
  if(left<a[cnt]&&right<a[cnt]) cnt=max(dfs(a[cnt],right,cnt+1),dfs(left,a[cnt],cnt+1));
  else if(left<a[cnt])cnt=dfs(a[cnt],right,cnt+1);
  else if(right<a[cnt]) cnt=dfs(left,a[cnt],cnt+1);
  
  return cnt;
}

int main(){
  int n;
  cin>>n;
  rep(i,n){
    rep(j,10)cin>>a[j];
    //rep(j,10)cout<<a[i]<<" ";
    //cout<<endl;
    if(dfs(a[0],-INF,1)==10)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}