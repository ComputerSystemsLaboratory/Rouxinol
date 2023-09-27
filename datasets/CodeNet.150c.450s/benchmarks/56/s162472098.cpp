#include<iostream>

using namespace std;

int main(){

	int n;

	long long a;

	long long minvalue = 1000000;

	long long maxvalue = -1000000;

	long long sum = 0;

	cin >> n;

	for ( int i = 0; i < n; i++ ){

		cin >> a;

		if ( a < minvalue ) minvalue = a;

		if ( a > maxvalue ) maxvalue = a;

		sum += a;

	}

	cout << minvalue << " " << maxvalue << " " << sum << endl;

	return 0;

}