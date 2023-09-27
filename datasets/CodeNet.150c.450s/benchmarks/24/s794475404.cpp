#include<cstdio>
#include<algorithm>
#include<utility>
#include<vector>
#define repi(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,a) repi(i,0,a)

typedef std::pair<int, int> P;

int N, M;
std::vector<P> ps;

int main()
{
  while( scanf( "%d%d", &N, &M ), N|M )
  {
    ps.clear();

    rep( i, N )
    {
      int d, p;
      scanf( "%d%d", &d, &p );

      ps.push_back( P( -p, d ) );
    }

    std::sort( ps.begin(), ps.end() );

    int p = 0, ans = 0;
    while( M > 0 && p < N )
    {
      M -= ps[p].second;

      if( M < 0 )
	ans += (-ps[p].first)*(-M);

      ++p;
    }

    while( p < N )
      ans += (-ps[p].first)*(ps[p].second), ++p;

    printf( "%d\n", ans );
  }
  
  return 0;
}