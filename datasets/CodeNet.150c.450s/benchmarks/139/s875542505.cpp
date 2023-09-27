#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define Rep(i,n) for(intl i=0,nn=(intl)(n);i<nn;++i)
#define Rep1(i,n) for(intl i=1,nn=(intl)(n)+1;i<nn;++i)
#define vec vector
#define fi first
#define se second
#define pub push_back
#define SortA(v) sort(v.begin(), v.end())
#define SortD(v) sort(v.rbegin(),v.rend())
#define All(a) (a).begin(),(a).end()
#define Input(a) for(intl ii=0,nn=(intl)(a.size());ii<nn;ii++){cin>>(a).at(ii);}
#define Input2(a,b) for(intl ii=0,nn=(intl)(a.size());ii<nn;ii++){cin>>(a).at(ii);cin>>(b).at(ii);}
#define mp make_pair
#define mt make_tuple
using intl = int64_t;
using vi = vec<intl>;
using vvi = vec<vi>;
using pi = pair<intl,intl>;
using vpi = vec<pi>;
using si = set<intl>;
using vsi = vec<si>;
using mii = map<intl,intl>;
using vmii = vec<mii>;
vec<intl> dx = {0, 1, 0, -1, 1, 1, -1, -1};
vec<intl> dy = {1, 0, -1, 0, 1, -1, 1, -1};
constexpr intl INF = 9223372036854775807;

int main(){
  intl N,M;
  cin >>N>>M;
  
  vsi path(N+1);
  intl A,B;
  Rep1(i,M){
    cin >>A>>B;
    path[A].insert(B);
    path[B].insert(A);
  }
  
  vi sign(N+1);
  vector<bool> visited(N+1,0);
  deque<intl> next;
  
  next.pub(1);
  visited[1]=1;
  
  while(!next.empty()){
    intl r = next.front();
    next.pop_front();
    for(auto&& cave : path[r]){
      if(!visited[cave]){
        next.pub(cave);
        sign[cave] = r;
        visited[cave] = 1;
      }
    }
  }
  
  cout <<"Yes"<<'\n';
  for(intl i = 2;i <= N;++i){
    cout <<sign[i]<<'\n';
  }
  
  
  
}
    
    