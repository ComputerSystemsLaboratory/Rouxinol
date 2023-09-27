#include<algorithm>
#include<cstdio>
#define repi(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,a) repi(i,0,a)

int n, m;
int s[200];
int St, Sh;

int main()
{
  while( scanf( "%d%d", &n, &m ), n|m )
  {
    St = Sh = 0;
    
    rep( i, n+m )
    {
	scanf( "%d", s+i );

	(i<n?St:Sh) += s[i];
    }

    std::sort( s, s+n ); std::sort( s+n, s+n+m );

    bool fl = false;
    
    rep( i, n ) repi( j, n, n+m ) if( St-s[i]+s[j] == Sh-s[j]+s[i] )
    {
      printf( "%d %d\n", s[i], s[j] );
      fl = true;
      
      goto end;
    }

  end:;
    
    if( !fl )
      puts( "-1" );
  }
  
  return 0;
}