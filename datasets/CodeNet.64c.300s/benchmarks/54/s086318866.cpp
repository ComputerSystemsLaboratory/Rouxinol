#include <iostream>
using namespace std;

#define N 101

int main()
{

	int n, ans;
	int arr[N];
	long long table[N][21];

	cin >> n;
	for(int i = 0; i < n - 1; i++) cin >> arr[i];

	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < 21; j++) table[i][j] = 0;
	}

	cin >> ans;

	table[0][arr[0]] = 1;

	for(int i = 1; i < n - 1; i++) {
		for(int j = 0; j < 21; j++) {
			if(table[i - 1][j] >= 1) {
				if(j - arr[i] >= 0) {
					table[i][j - arr[i]] += table[i - 1][j];
				}
				if(j + arr[i] <= 20) {
					table[i][j + arr[i]] += table[i - 1][j];
				}
			}
		}
	}

	cout << table[n - 2][ans] << endl;

	return 0;

}