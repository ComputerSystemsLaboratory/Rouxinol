#include <iostream>
#include <algorithm>

using namespace std;

int A,B,score;

int main(void){

  while( cin >> score ){

    A = B = 0;
    A += score;
    for( int i = 0 ; i < 3 ; i++ ){
      cin >> score;
      A += score;
    }
    for( int i = 0 ; i < 4 ; i++ ){
      cin >> score;
      B += score;
    }
    cout << max( A , B ) << endl;

  }
  return 0;
}