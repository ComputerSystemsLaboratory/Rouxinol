#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  int e;
  while ( cin >> e && e ) {
    int answer = e;
    int l1 = (int)ceil(pow( e, 1.0/2.0 ));
    int l2 = (int)ceil(pow( e, 1.0/3.0 ));
    for ( int i = 0; i <= l1; i++ ) {
      for ( int j = 0; j <= l2; j++ ) {
	if ( i*i + j*j*j <= e ) {
	  int x = e - i * i - j * j * j;
	  int y = i;
	  int z = j;
	  answer = min( answer, x+y+z  );
	}
      }
    }
    cout << answer << endl;
  }
}