#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int n, m, M, a;
	long sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> a;
		sum += a;
		if (i == 0){
			m = a;
			M = a;
		}

		if (a>M)M = a;
		else if (a < m)m = a;

	}
	//cout << fixed << setprecision(5);
	cout << m << " " << M << " " << sum << endl;

	return 0;
}