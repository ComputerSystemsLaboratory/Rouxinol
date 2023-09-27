#include<iostream>
using namespace std;

int main(){
int x,y;

for( int i = 0; ; i++ ){
  
 cin >> x >> y;

  if( x == 0 && y ==0 ) break;
  else if ( x >= y ) cout << y << " " << x << endl;
  else cout << x << " " << y << endl;
} 

}