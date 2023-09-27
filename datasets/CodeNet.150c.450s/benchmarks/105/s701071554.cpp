// In the Name of Allah
// Ya Ali

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define F first
#define S second
#define pb push_back
#define all( x ) x.begin() , x.end()
#define mp make_pair

const int maxn = 210 ;
const int INF = 1e18 ;

int n , t , a[ maxn ] ;
bool use[ maxn ] ;
vector< int > vv ;
string s ;

bool ok( int x )
{
  memset( use , false , sizeof use ) ;
  int now = 0 ;

  vector< int > v1 ;
  for(auto x : vv)v1.pb( x );

  for(int i = 62 ; i >= 0 ; i --){

     int po = -1 ;
     for(int j = 0 ; j < v1.size() ; j ++)
       if( (v1[ j ]&(1ll<<i)) && !use[ j ] )
          po = j ;

     bool t1 = (x&(1ll<<i)) , t2 = (now&(1ll<<i));

     if( t1!=t2 && po != -1 )now ^= v1[ po ] ;

     if( po != -1 ){
       use[ po ] = true ;
       for(int j = 0 ; j < v1.size() ; j ++)
         if( j != po && (v1[ j ]&(1ll<<i)) )
           v1[ j ] ^= v1[ po ] ;
     }
  }

  return ( now == x ) ;
}

signed main()
{
 ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0) ;

 cin >> t ;
 while( t -- ){
   cin >> n ;
   for(int i = 1 ; i <= n ; i ++)
     cin >> a[ i ] ;
   cin >> s ;

   bool ans = 0 ;
   vv.clear();

   for(int i = n ; i >= 1 ; i --){
      if( s[ i-1 ] == '0' )vv.pb( a[ i ] ) ;
      else{
         if( !ok( a[ i ] ) ){
           ans = 1 ;
           break ;
         }
      }
   }

   cout << ans << "\n" ;

 }

  return 0;
}
