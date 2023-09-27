#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  while(1){
    int N,i; cin >> N;
    if( N == 0 ) break;
    int x[201],y[201];
   
    int xMax = 0,xMin = 0,yMax = 0,yMin = 0;
    x[0] = 0,y[0] = 0;
    int n,d;
    for( i = 1; i < N; i++ ){
      cin >> n >> d;
      if( d == 0 ){
	x[i] = x[n]-1;
	y[i] = y[n];
      }else if( d == 2 ){
	x[i] = x[n]+1;
	y[i] = y[n];
      }else if( d == 1 ){
	y[i] = y[n]-1;
	x[i] = x[n];
      }else if( d == 3 ){
	y[i] = y[n]+1;
	x[i] = x[n];
      }
      xMax = max( x[i],xMax );
      yMax = max( y[i],yMax );
      xMin = min( x[i],xMin );
      yMin = min( y[i],yMin );
    }

    cout << xMax - xMin + 1 << " " << yMax - yMin + 1 << endl;
  }
  return 0;
}