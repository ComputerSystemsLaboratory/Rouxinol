#include <iostream>
 
using namespace std;
 
int sx;
int sy;
int nx[40];
int ny[40];
int n;
int a,b;
int cnt;
 
int j( int sx , int sy ){
 
  if( sx == a && sy == b ){
    cnt++;
    /* cout << cnt << endl;*/
    return cnt;
  }
  for( int i = 0 ; i < n ; i++ ){
    if( sx == nx[i] && sy == ny[i] ) return cnt;
  }
   
  if( sx + 1 <= a && sy <= b ) j( sx + 1 , sy );
  if( sx <= a && sy + 1 <= b ) j( sx , sy + 1 ); 
   
  return cnt;
}
 
int main(void){
   
  while(1){
     
    cin >> a >> b;
    if( a == 0 && b == 0 )break;
    cin >> n;
     
    for( int i = 0 ; i < n ; i++ ){
      cin >> nx[i] >> ny[i];
    }
     
    sx = 1;
    sy = 1;
    cnt = 0;
 
    cout << j( sx , sy ) << endl;
  }
  return 0;
}