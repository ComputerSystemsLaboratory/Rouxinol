#include<iostream>
using namespace std;

int main() {
    int w,h;
    int a[101][101] = {0}; //initialize!
    
    cin >> w >> h;
    for ( int i = 0; i < w; i++ ) {
    	for ( int j = 0; j < h; j++ ) {
    		cin >> a[i][j];
    		a[w][j] += a[i][j];
    		a[i][h] += a[i][j];
    		a[w][h] += a[i][j];
    	}
    }
    for ( int i = 0; i <= w; i++ ) {
    	for ( int j = 0; j <= h; j++ ) {
    		cout << a[i][j];
    		if ( j != h ) cout << " ";
    	}
    	cout << endl;
    }
    return 0;
}
