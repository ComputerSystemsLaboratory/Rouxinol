#include<iostream>
using namespace std;

int main(){

	int n, num[10000];
	int max = -1000000, min = 1000000;
	long long sum = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> num[i];

		if(min > num[i]) min = num[i];
		if(max < num[i]) max = num[i];
		sum = sum + num[i];
	}

	cout << min << " " << max << " " << sum << endl;

	return 0;
}
