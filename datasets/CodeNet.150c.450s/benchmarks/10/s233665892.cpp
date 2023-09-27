#include<iostream>
using namespace std;

int main() {
	int b,f,r,v;
	int a[1+12][1+10+1] = {0}; //1indexed
	int n;
	
    cin >> n;
	for ( int i = 0; i < n; i++ ) {
	    cin >> b >> f >> r >> v;
	    a[3*b-2 + (f-1) ][r] += v;
	}
	for ( int k = 1; k <= 4; k++ ) {
	   if ( k > 1 ) cout << "####################" << endl;
	   for ( int i = 1; i <= 3; i++ ) {
	       for ( int j = 1; j <= 10; j++ ) {
	           cout << " " << a[3*k-2 + (i-1) ][j];
	       }
	       cout << endl;
	   }
	}
	return 0;
}
