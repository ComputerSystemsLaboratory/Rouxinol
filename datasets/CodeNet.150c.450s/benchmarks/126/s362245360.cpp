#include<bits/stdc++.h>
using namespace std ;

typedef pair<int,int> pii ;

int a = 0 ;
int b = 0 ;
int n = 0 ;
int dp[16][16] = {1} ;
vector<pii> construct ;
int inf = pow(10,9) ;

int solve()
{
  for ( int i = 0 ; i < 16 ; i++ )
  {
    for ( int j = 0 ; j < 16 ; j++ )
    {
      dp[i][j] = 0 ;
    }
  }
  for ( int i = 0 ; i < construct.size() ; i++ )
  {
    dp[ construct[i].first - 1 ][ construct[i].second - 1 ] = inf ;
  }
  construct.clear() ;
  dp[0][0] = 1 ;
  for ( int i = 0 ; i < a ; i++ )
  {
    for ( int j = 0 ; j < b ; j++ )
    {
      /*<debug>
      printf("<debug>\n\n") ;
      for ( int x = 0 ; x < a ; x++ )
      {
        for ( int y = 0 ; y < b ; y++ )
        {
          printf("%9d,", dp[x][y]) ;
        }
        printf("\n") ;
      }
      printf("\n</debug>\n") ;
      </debug>*/
      if ( dp[i][j] == inf ) continue ;
      if ( i < a - 1 )
      {
        if ( dp[ i + 1 ][j] != inf )
        {
          dp[ i + 1 ][j] += dp[i][j] ;
        }
      }
      if ( j < b - 1 )
      {
        if ( dp[i][ j + 1 ] != inf )
        {
          dp[i][ j + 1 ] += dp[i][j] ;
        }
      }
    }
  }
  return dp[ a - 1 ][ b - 1 ] ;
}

int main()
{
  while (1)
  {
    cin >> a >> b ;
    if ( !a && !b ) break ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ )
    {
      int x, y ;
      cin >> x >> y ;
      construct.push_back( pii(x,y) ) ;
    }
    printf("%d\n", solve()) ;
  }
  return 0 ;
}