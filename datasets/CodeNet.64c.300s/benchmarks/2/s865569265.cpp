#include <iostream>
using namespace std;

int main(){
  int m, f, r;
  cin >> m >> f >> r;
  while ( m + f + r != -3 ) {
    if ( m == -1 || f == -1 ) cout << "F" << endl;
    else if ( m + f >= 80 ) cout << "A" << endl;
    else if ( 65 <= m + f && m + f < 80 ) cout << "B" << endl;
    else if ( 50 <= m + f && m + f < 65 ) cout << "C" << endl;
    else if ( m + f < 30 ) cout << "F" << endl;
    else if ( 30 <= m + f && m + f < 50 && r < 50 ) cout << "D" << endl;
    else cout << "C" << endl;
    cin >> m >> f >> r;
  }
  return 0;
}
