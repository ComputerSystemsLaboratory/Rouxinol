#include <string>
#include <vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<functional>
#include<list>
#include<deque>
#include<bitset>
#include<set>
#include<map>
#include<unordered_map>
#include<cstring>
#include<sstream>
#include<complex>
#include<iomanip>
#include<numeric>
#define X first
#define Y second
#define pb push_back
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define repe(X,Y) for ((X) = 0;(X) < (Y);++(X))
#define peat(X,Y) for (;(X) < (Y);++(X))
#define all(X) (X).begin(),(X).end()
#define rall(X) (X).rbegin(),(X).rend()
#define eb emplace_back
#define UNIQUE(X) (X).erase(unique(all(X)),(X).end())

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
template<class T> using vv=vector<vector<T>>;
template<class T> ostream& operator<<(ostream &os, const vector<T> &t) {
os<<"{"; rep(i,t.size()) {os<<t[i]<<",";} os<<"}"<<endl; return os;}
template<class S, class T> ostream& operator<<(ostream &os, const pair<S,T> &t) { return os<<"("<<t.first<<","<<t.second<<")";}

int INF=1e8;
int dist[15][15];

int main(){
  ios_base::sync_with_stdio(false);
  cout<<fixed<<setprecision(0);
  int n;
  while(cin>>n,n){
    fill(dist[0],dist[0]+15*15,INF);
    int m=0,a,b,d;
    rep(i,n){
      cin>>a>>b>>d;
      dist[a][b]=dist[b][a]=min(dist[a][b],d);
      m=max({m,a,b});
    }
    ++m;
    rep(i,m) dist[i][i]=0;
    rep(k,m) rep(i,m) rep(j,m)
      dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);

    pii re=pii(INF,-1);
    rep(i,m){
      int sum=0;
      rep(j,m) sum+=dist[i][j];
      re=min(re,pii(sum,i));
    }
    //rep(i,m){rep(j,m)cout<<dist[i][j]<<",";cout<<endl;}
    cout<<re.Y<<" "<<re.X<<endl;
  }
  return 0;
}