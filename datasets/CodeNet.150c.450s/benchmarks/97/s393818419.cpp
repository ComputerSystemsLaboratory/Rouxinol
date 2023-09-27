#include <iostream>
#include <algorithm>

using namespace std;
 
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};
 
int main(){
    int mN,mE,mS,mW,N,n,d,x[200],y[200];
 
    while(1){
 
	mN = mE = mS = mW = 0;
 
	cin >> N;
	if( N == 0 ) break;
 
	for( int i = 0 ; i < 200 ; i++ ){
	    x[i] = 0;
	    y[i] = 0;
	}
 
	for( int i = 1 ; i < N ; i++ ){
	    cin >> n >> d;
 
	    x[i] = x[n] + dx[d];
	    y[i] = y[n] + dy[d];
 
	    mN = max( y[i] , mN );
	    mS = min( y[i] , mS );
	    mW = max( x[i] , mW );
	    mE = min( x[i] , mE );
	}
	cout << mW - mE + 1 << " " << mN - mS + 1 << endl;
    }
    return 0;
}