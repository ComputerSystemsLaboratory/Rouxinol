#include <iostream>

using namespace std;

int counter;

void search( int n, int s, int csum, int begin, int depth ){
  for( int i = begin; i <= 9; i++ ){
    if( depth == n && csum + i == s  ){
      counter++;
    }
    if( csum >= s ){ return; }
    search( n, s, csum + i, i + 1, depth + 1 );
  }
}

int main(){
  int n, s;
  while( 1 ){
    counter = 0;
    cin >> n >> s;
    if( !n && !s ){ return 0; }
    search( n, s, 0, 0, 1 );
    cout << counter << endl;
  }
}