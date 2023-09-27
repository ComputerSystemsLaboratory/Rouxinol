#include<iostream>
using namespace std;

int main() {
	int b,f,r,v;
	int a[4+1][3+1][10+1] = {0};// 1indexed
	int n;
	
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		cin >> b >> f >> r >> v;
		a[b][f][r] += v;
	}
	for ( int b = 1;b <= 4; b++ ) {
		if ( b > 1 ) cout << "####################\n";
		for ( int f = 1; f <= 3; f++ ) {
			for ( int r = 1; r <= 10; r++ ) {
				cout << " " << a[b][f][r];
			}
			cout << endl;
		}   
	}
	return 0;
}
