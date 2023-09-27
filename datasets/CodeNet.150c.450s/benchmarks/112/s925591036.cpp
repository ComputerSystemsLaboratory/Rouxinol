 #include <iostream>
#include <string.h>
using namespace std;
int main(){
  int n , m , i ;
  string x[10000] , y[10000] ;
  string str  , st ;
  string s;
  while(1){
    cin >> n ;
    str = "";
    if ( n== 0) break;
    for( i=0 ; i<n ; i++ ){
      cin >> x[i] >> y[i] ;
    }
    cin >> m ;
    for( i=0 ; i<m ; i++ ){
      cin >> st;
      s = st;
      for( int j=0 ; j<n ; j++ ){
        if( st == x[j] ){
          s = y[j] ;
          continue ;
        }
      }
        str += s;
    }
    cout << str << endl;
  }
}