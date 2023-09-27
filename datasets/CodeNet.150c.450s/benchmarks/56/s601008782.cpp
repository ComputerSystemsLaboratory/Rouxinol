#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long numbers[n], i =0;
	while(cin >> numbers[i]) i++;
	long max = numbers[0], min = numbers[0], sigma = 0;
	for(i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
		if (numbers[i] > max) max = numbers[i];
		if (numbers[i] < min) min = numbers[i];
		sigma += numbers[i];
	}
	cout << min << " " << max << " " << sigma << endl;
	// your code goes here
	return 0;
}