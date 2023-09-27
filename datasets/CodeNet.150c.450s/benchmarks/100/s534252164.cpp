#include <iostream>
using namespace std;

int main()
{
	int n;
	const int max = 100;
	int num[max];
	int a[max];
	cin >> n;
	for(int i = 1; i < max; i++){
		num[i] = 0; a[i] = 0;
	}
	num[1] = 1;
	a[1] = 1;
	for(int i = 1; i <= n; i++){
		int digit = max - 1;
		for(;num[digit] == 0;digit--);
		for(int j = digit; j >= 1; j--){
			num[j + 2] += (a[j] * i) / 100;
			num[j + 1] += ((a[j] * i) % 100) / 10;
			num[j] = ((a[j] * i) % 100) % 10;
		}
		for(int t = 1; (t <= digit + 2) && (t < max); t++){
			num[t + 1] += num[t] / 10;
			num[t] = num[t] % 10;
		}
		for(int m = 1; m <= digit + 2; m++)
			a[m] = num[m];
	}
	int digit = max - 1;
	for(;num[digit] == 0;digit--);
	for(int k = digit; digit >= 1; digit--)
		cout << num[digit];
	cout << endl;
	return 0;
}