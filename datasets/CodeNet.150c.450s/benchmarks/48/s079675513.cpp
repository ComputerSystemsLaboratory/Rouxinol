#include<algorithm>
#include<cstdio>
#include<cmath>
#define repi(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,a) repi(i,0,a)

int e;

int main()
{
  while( scanf( "%d", &e ), e )
  {
    int ans = 1000000;
    
    rep( y, sqrt(e)+1 ) rep( z, cbrt(e)+1 ) if( y*y+z*z*z <= e )
      ans = std::min( ans, (e-y*y-z*z*z)+y+z );

    printf( "%d\n", ans );
  }

  return 0;
}