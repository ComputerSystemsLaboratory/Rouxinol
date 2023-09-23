#include <iostream>
using namespace std;

int main(void){
	int n, min = 1000000000, max = -1000000000;
	long int total = 0;
	int *num;

	cin >> n;
	
	num = new int[n];

	for (int i = 0; i < n; i++){
		cin >> num[i];
	}

	for (int i = 0; i < n; i++){
		if (min > num[i]) min = num[i];
		if (max < num[i]) max = num[i];

		total += num[i];
	}
	
	cout << min << " " << max << " " << total << "\n";

	delete[] num;
	return 0;
}