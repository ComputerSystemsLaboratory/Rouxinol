#include <iostream>
using namespace std;

int main(){
  int n, m;
  char c[256];
  char a,b;

  while( cin >> n && n ){
    for( int i=0;i<256;i++ )
      c[i] = '.';
    while( n-- ){
      cin >> a >> b;
      c[(int)a] = b;
    }

    cin >> m;
    while( m-- ){
      cin >> a;
      if( c[(int)a]!='.' ){
	cout << c[(int)a];
	//	c[(int)a] = '.';
      }else{
	cout << a;
      }
    }
    cout << endl;
  }
  return 0;
}