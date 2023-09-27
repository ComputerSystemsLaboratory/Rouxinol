#include<bits/stdc++.h>
using namespace std ;

#define inf pow(2,31)-1
typedef pair<int,int> pii ; //first:now-vertex second:total-cost

vector< pii > point[500000] ;
priority_queue< pii, vector<pii>, greater<pii> > que ;
int v, e, r ;
int data[100000] ;

void solve()
{
  fill( data, data+v, inf ) ;
  que.push( pii( r,0 ) ) ;
  while ( que.size() )
  {
    pii now = que.top() ;
    que.pop() ;
    //printf("[debug]now:%d,%d\n", now.first, now.second ) ;
    if ( data[ now.first ] > now.second )
    {
      data[ now.first ] = now.second ;
      for ( int i = 0 ; i < point[ now.first ].size() ; i++ )
      {
        pii edge = point[ now.first ][i] ;
        que.push( pii( edge.first, now.second + edge.second ) ) ;
        //printf("[debug]pushed:%d,%d\n", edge.first, now.second + edge.second ) ;
      }
    }
  }
}

int  main()
{
  int s, t, d ;
  cin >> v >> e >> r ;
  for ( int i = 0 ; i < e ; i++ )
  {
    cin >> s >> t >> d ;
    point[s].push_back( pii( t, d ) ) ;
  }
  solve() ;
  for ( int i = 0 ; i < v ; i++ )
  {
    if ( data[i] == inf ) puts("INF") ;
    else printf("%d\n",data[i]) ;
  }
  return 0 ;
}