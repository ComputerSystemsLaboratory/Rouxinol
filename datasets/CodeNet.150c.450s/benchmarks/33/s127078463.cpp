#include<cstdio>
#include<algorithm>
#define rep(i,a) for(int i=0;i<(a);++i)

int x, y, s;

int tax( int r, int x )
{ return x*(100+r)/100; }

int main()
{
  while( scanf( "%d%d%d", &x, &y, &s ), x|y|s )
  {
    int ans = 0;

    rep( i, s-1 ) rep( j, s-1 ) if( tax(x,i+1)+tax(x,j+1) == s )
      ans = std::max( ans, tax(y,i+1)+tax(y,j+1) );
      
    printf( "%d\n", ans );
  }
  
  return 0;
}