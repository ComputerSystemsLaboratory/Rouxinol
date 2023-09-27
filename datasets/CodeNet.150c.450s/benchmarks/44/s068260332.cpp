#include <iostream>
using namespace std;

int main(){
  int a[4];
  int b[4];

  int h=0, bl=0;

  while( cin>>a[0] ){
    for( int i=1;i<4;i++ )
      cin >> a[i];
    for( int j=0;j<4;j++ )
      cin >> b[j];
    
    h=0; bl=0;
    for( int i=0;i<4;i++ )
      if( a[i]==b[i] )
	h++;
    for( int i=0;i<4;i++ )
      for( int j=0;j<4;j++ )
	if( a[i]==b[j] && i!=j )
	  bl++;
    cout << h << " " << bl << endl;
  }

  return 0;
}