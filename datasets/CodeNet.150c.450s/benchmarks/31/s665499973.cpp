#include <iostream>
#include <vector>
using namespace std;

int main(){
	long n;
	cin >> n;
	//n = 6;
	long max = -1000000000;
	vector<long> R(n);
	for (long i = 0; i < n; i++){
		cin >> R[i];
	}
	long Rmin = R[0];
	/*
	R[0] = 5;
	R[1] = 3;
	R[2] = 1;
	R[3] = 3;
	R[4] = 4;
	R[5] = 3;
	*/
	for (long i = 1; i < n; i++){
		if (R[i] - Rmin > max) max = R[i] - Rmin;
		if (R[i] < Rmin) Rmin = R[i];
	}
	cout << max << endl;
	return 0;
}