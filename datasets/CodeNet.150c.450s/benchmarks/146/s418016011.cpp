#include<iostream>
#include<complex>
#include<cmath>
using namespace std;
#define EPS 1e-10

int main(void){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		double x1, y1, x2, y2, x3, y3, x4, y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		if( abs((x2-x1)*(y4-y3) - (x4-x3)*(y2-y1))<EPS )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}