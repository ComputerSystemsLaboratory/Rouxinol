#include<iostream>
using namespace std;

int main() {
	int n;
	float x[4],y[4];
	float slope1,slope2;
	
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < 4; j++ )
			cin >> x[j] >> y[j];
		slope1 = (y[1] - y[0]) / (x[1] - x[0]);
		slope2 = (y[3] - y[2]) / (x[3] - x[2]);
		if ( slope1 == slope2 )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}