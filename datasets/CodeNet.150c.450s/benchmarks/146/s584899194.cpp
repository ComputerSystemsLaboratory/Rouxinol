#include<iostream>
using namespace std;

int main(){
	double x[4], y[4];
	int n;
	cin >> n;
	for( int i=0; i<n; i++ ){
		for( int j=0; j<4; j++ )
			cin >> x[j] >> y[j];
		double ab = (y[1]-y[0])/(x[1]-x[0]);
		double cd = (y[3]-y[2])/(x[3]-x[2]);
		cout << (ab==cd?"YES":"NO") << endl;
	}
	return 0;
}