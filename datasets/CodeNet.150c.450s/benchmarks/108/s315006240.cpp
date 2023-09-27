#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int n;
int a[100][100] = {0};
int k[100] = {0};
int d[100];

int kansu( int i, int t ){
	if ( d[i] != -1 && d[i] <= t ) return 0;
	d[i] = t;
	t++;
	for ( int j = 0; j < k[i]; j++ ) {
		kansu( a[i][j], t );
	}
	return 0;
}

int main(){
	cin >> n;
	int s;
	for ( int i = 0; i < n; i++ ) {
		cin >> s;
		cin >> k[i];
		for ( int j = 0; j < k[i]; j++ ) {
			cin >> s;
			a[i][j] = s-1;
		}
	}
	for ( int i = 0; i < n; i++ ) {
		d[i] = -1;
	}
	kansu(0,0);
	for ( int i = 0; i < n; i++ ) {
		cout << i+1 << " " << d[i] << endl;
	}
	return 0;
}