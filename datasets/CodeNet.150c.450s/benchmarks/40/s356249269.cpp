#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n = 6, d[ n+1 ];
  for( int i = 1; i <= n; i++ ) {
    cin >> d[i];
  }

  string cmd;
  cin >> cmd;
  for( int i = 0; i <= cmd.size(); i++ ) {
    char c = cmd[i];
    int tmp;

    if( c == 'N' ){
      tmp = d[1]; d[1] = d[2]; d[2] = d[6]; d[6] = d[5]; d[5] = tmp;
    }
    if( c == 'S' ){
      tmp = d[1]; d[1] = d[5]; d[5] = d[6]; d[6] = d[2]; d[2] = tmp;
    }
    if( c == 'E' ){
      tmp = d[1]; d[1] = d[4]; d[4] = d[6]; d[6] = d[3]; d[3] = tmp;
    }
    if( c == 'W' ){
      tmp = d[1]; d[1] = d[3]; d[3] = d[6]; d[6] = d[4]; d[4] = tmp;
    }
  }
  cout << d[1] << endl;

  return 0;
}