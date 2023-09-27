#include<iostream>
using namespace std; //or std::cin et al.

int main() {
	int n,a;
	long long sum,min,max;
	int i;
	
	cin >> n;
	if (n != 0) {
	    cin >> a;
	    min = max = sum = a;
	}
	for ( i = 1; i < n; i++ ) {
		cin >> a;
		sum += a;
		min =  min > a?a:min;
		max =  max < a?a:max;
	}
	cout << min << " " << max << " " << sum << endl;
	
	return 0;
}
