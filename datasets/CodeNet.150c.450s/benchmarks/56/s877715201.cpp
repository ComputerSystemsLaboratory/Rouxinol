#include<iostream>
#include<vector>

using namespace std;

int main(void){
	int n;
	cin >> n;

	vector<int> a(n);

	int max = -1000000;
	int min = 1000000;
	long long int sum = 0;
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;

		sum += a;
		if (max < a){
			max = a;
		}
		if (min > a){
			min = a;
		}
	}

	cout << min << " " << max << " " << sum << endl;

	return 0;
}