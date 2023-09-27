#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>

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

/*---------------------------------------------------*/

int n,m;

void solve(pi p[]){
  ll cnt=0,d=0;
  sort(p,p+n);reverse(p,p+n);
  rep(i,n){
    d+=p[i].second;
    if(p[i].second<=m){
      m-=p[i].second;
      p[i].second=0;
    }else{
      p[i].second-=m;
      m=0;
    }
    cnt+=p[i].first*p[i].second;
  }
  cout<<cnt<<endl;
}

int main(){
  while(cin>>n>>m){
    if(n==0&&m==0)break;
    pi p[n];
    rep(i,n)cin>>p[i].second>>p[i].first;
    solve(p);
  }
  return 0;
}