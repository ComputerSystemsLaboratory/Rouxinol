#include <bits/stdc++.h>
using namespace std;

int main(){
	double A[2][2];
	double B[2][1];
	double x,y;
	while(cin >> A[0][0] >> A[0][1] >> B[0][0] >> A[1][0] >> A[1][1] >> B[1][0]){
		A[0][1] /= A[0][0];
		B[0][0] /= A[0][0];
		A[1][1] -= A[1][0]*A[0][1];
		B[1][0] -= A[1][0]*B[0][0];
		B[1][0] /= A[1][1];
		B[0][0] -= A[0][1]*B[1][0];
		cout << fixed<< setprecision(3) << B[0][0] << " " << setprecision(3) << B[1][0] << endl;
	}
	return 0;
}