#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int n;
int a[100][100] = {0};
int k[100] = {0};
int t = 1;
int d[100] = {0};
int f[100] = {0};

int kansu( int i ){
	if ( d[i] != 0 ) return 0;
	d[i] = t;
	t++;
	for ( int j = 0; j < k[i]; j++ ) {
		if ( kansu( a[i][j] ) == 1 ) t++;
	}
	f[i] = t;
	return 1;
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
		if ( kansu(i) == 1 ) t++;
	}
	for ( int i = 0; i < n; i++ ) {
		cout << i+1 << " " << d[i] << " " << f[i] << endl;
	}
	return 0;
}