#include<algorithm>
#include<map>
#include<cstdio>
#define repi(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,a) repi(i,0,a)
#define itr(it,a) for(auto it=(a).begin();it != (a).end();++it)

int N, M;
int h[1500], w[1500];
std::map<int, int> cnth, cntw;

int main()
{
  while( scanf( "%d%d", &N, &M ), N|M )
  {
    cnth.clear(); cntw.clear();
    
    int ans = 0;

    rep( i, N )
      scanf( "%d", h+i );

    rep( i, M )
      scanf( "%d", w+i );

    rep( i, N )
    {
      int s = 0;
      repi( j, i, N )
      {
	s += h[j];
	++cnth[s];
      }
    }
    
    rep( i, M )
    {
      int s = 0;
      repi( j, i, M )
      {
	s += w[j];
	++cntw[s];
      }
    }

    std::map<int, int>::iterator it;
    itr( i, cnth ) if( (it = cntw.find(i->first)) != cntw.end() )
      ans += i->second*it->second;

    printf( "%d\n", ans );
  }
  
  return 0;
}