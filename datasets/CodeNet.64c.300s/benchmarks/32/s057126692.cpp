#include<iostream>
using namespace std;

int main(){
	int n, input, max = 0, min = 0;
	long sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> input;
		if (i == 0){
			max = input;
			min = input;
		}
		// sum //
		sum += input;
		// max //
		if (max < input) max = input;
		// min //
		if (min > input) min = input;
	}

	cout << min << " " << max << " " << sum << endl;
}