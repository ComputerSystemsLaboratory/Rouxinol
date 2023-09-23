#include <iostream>
using namespace std;

int main() {

  int cnt[100] = {0};
  int cnt_max = 0;
  int input;

  while( cin >> input ) {

    cnt[input-1]++;
    cnt_max = max( cnt_max, cnt[input-1] );

  }

  for ( int i = 0; i < 100; i++ ) {

    if ( cnt[i] == cnt_max ) cout << i+1 << endl;

  }

  return 0;

}