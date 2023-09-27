#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
//_____
#define pb push_back
#define fi first
#define se second
#define mkp make_pair
#define rep(i,n) for(int i=0; i<(n); ++i)
#define reps(i,f,n) for(int i=(f); i<=(n); ++i)
#define err(...) fprintf(stderr, __VA_ARGS__)
#define show(x) cerr << #x << ':' << x << endl
#define outl(x) cout << (x) << '\n'
#define FAST() cin.tie(0), ios::sync_with_stdio(false)
typedef pair<int,int> pii;
#define INF 0x3f3f3f3f
//_______
vector<pii> G[102];
bool used[102];

int prim()
{
   priority_queue < pii, vector<pii>, greater<pii> > pq;
   pq.push( mkp(0,0) );
   int sum = 0;

   while( !pq.empty() ){
      const pii  tmp = pq.top(); pq.pop();
      if( used[ tmp.se ]++ )continue;
      sum += tmp.fi;

      rep(j, G[tmp.se].size() )
         pq.push( mkp( G[tmp.se][j].fi, G[tmp.se][j].se ) );
   }
   return (sum);
}

signed main()
{
   FAST();
   int N; cin >> N;

   rep(i, N)rep(j, N){
      int v; cin >> v;
      if( v != -1 ) G[i].pb( mkp(v,j) );
   }
   outl( prim() );
}


