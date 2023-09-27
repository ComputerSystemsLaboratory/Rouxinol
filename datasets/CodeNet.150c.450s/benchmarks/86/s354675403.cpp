#include <iostream>
using namespace std;
int main(){
  int n,m,p;

  while( cin>>n>>m>>p && n|m|p ){
    m--;
    int x,y=0, z=0;
    for( int i=0;i<n;i++ ){
      cin >> x;
      y+=x;
      if( i==m ) z=x;
    }
    if( z==0 )
      x=0;
    else{
      y = y*(100-p);// / 100;
      x = y/z;// * 100;
    }
    cout << x << endl;
  }

  return 0;
}