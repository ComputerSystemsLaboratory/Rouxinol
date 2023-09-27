#include <iostream>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
using namespace std;
using pii = pair<int, int>;

int N;
int G[101][101];
bool used[101];

int prim()
{
   int sum = 0;
   priority_queue< pii, vector<pii>, greater<pii> > pq;
   pq.push( pii(0, 0) );

   while( !pq.empty() ){
      const pii tmp = pq.top(); pq.pop();
      if( tmp.fi == -1 || used[ tmp.se ]++ )continue;
      sum += tmp.fi;

      rep(i, N)
         pq.push( pii( G[tmp.se][i], i ) );
   }
   return (sum);
}

int main()
{
   ios::sync_with_stdio(false), cin.tie(0);
   cin >> N;

   rep(i, N)rep(j, N){
      cin >> G[i][j];
   }
   cout << prim() << '\n';
}

