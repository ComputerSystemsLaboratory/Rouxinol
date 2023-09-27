#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

	int n,buf;
	int min = 1000000, max = -1000000;
	long sum = 0;
	vector <int> a;

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> buf;
		a.push_back(buf);
	}

	for (int i = 0; i < a.size(); i++){
		if (a[i] < min) min = a[i];
		if (a[i] > max) max = a[i];
		sum += a[i];
	}

	cout << min << " " << max << " " << sum << endl;


	return 0;
}