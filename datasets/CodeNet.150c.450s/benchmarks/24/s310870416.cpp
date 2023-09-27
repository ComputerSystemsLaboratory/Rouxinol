#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> pii;

int main(void) {
  int i,j;
  int n,m;
  while(1){
    cin>>n>>m;
    if(n==0 && m==0)break;
    pii p[10000];
    rep(i,n)
      cin>>p[i].second>>p[i].first;
    sort(p,p+n,greater<pii>());//???????????????                                 
    ll cost=0;
    rep(i,n)
      if(p[i].second<=m)
        m-=p[i].second;
      else{
        cost+=(p[i].second-m)*p[i].first;
        m=0;
      }
    cout<<cost<<endl;
  }
}