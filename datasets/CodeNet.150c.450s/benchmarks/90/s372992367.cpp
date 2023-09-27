#include <iostream>

using namespace std;

int main(void){

  int array[102];
  int n;
  for( int i = 0 ; i <= 101 ; i++ )array[i] = 0;

  while( cin >> n ){
    array[n]++;
  }

  int yano = 0;
  for( int i = 1 ; i <= 100 ; i++ ){
    yano = max( array[i] , yano );
  }

  for( int i = 1 ; i <= 100 ; i++ ){
    if( yano == array[i] ){
      cout << i << endl;
    }
  }

  return 0;
}