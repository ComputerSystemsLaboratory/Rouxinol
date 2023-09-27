#include <cstdio>
#include <limits>
#include <vector>
#define rep(i,a) for(int i=0;i<(a);++i)

const int INF = std::numeric_limits<int>::max()>>2;

struct edge
{
  int s, t, d; // ?§?????????????????????????

  edge( int s, int t, int d )
  : s(s), t(t), d(d)
  {}
};

int V, E, r;
std::vector<edge> es;
std::vector<int> d;

int main()
{
  scanf( "%d%d%d", &V, &E, &r );
  rep( i, E )
  {
    int s, t, dist;
    scanf( "%d%d%d", &s, &t, &dist );
    es.push_back( edge( s, t, dist ) );
  }

  d.resize( V, INF );
  d[r] = 0;

  bool upd = true;
  bool fl = false;
  int cnt = 0;
  while( upd )
  {
    upd = false;
    ++cnt;

    if( cnt > V )
      break;

    rep( i, E )
    {
      edge &e = es[i];
      if( d[e.s] != INF && d[e.t] > d[e.s]+e.d )
      {
        d[e.t] = d[e.s]+e.d;
        upd = true;

        if( cnt == V )
        {
          puts( "NEGATIVE CYCLE" );
          fl = true;

          break;
        }
      }
    }
  }

  if( !fl ) rep( i, V )
  {
    if( d[i] == INF )
      puts( "INF" );
    else
      printf( "%d\n", d[i] );
  }

  return 0;
}