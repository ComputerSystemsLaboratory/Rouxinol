#include<iostream>
using namespace std;

int main() {
    int w,h,l;
    int a[101][101],b[101][101];
    long long c[101][101] = {0};
    
    cin >> w >> h >> l;
    for ( int i = 0; i < w; i++ ) 
    	for ( int j = 0; j < h; j++ ) cin >> a[i][j];
    for ( int i = 0; i < h; i++ ) 
        for ( int j = 0; j < l; j++ ) cin >> b[i][j];
    for ( int i = 0; i < w; i++ ) 
        for ( int j = 0; j < l; j++ ) 
            for ( int k = 0; k < h; k++ ) c[i][j] += a[i][k] * b[k][j];
    for ( int i = 0; i < w; i++ ) {
        for ( int j = 0; j < l; j++ ) {
        	cout << c[i][j];
        	if ( j != l - 1 ) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
