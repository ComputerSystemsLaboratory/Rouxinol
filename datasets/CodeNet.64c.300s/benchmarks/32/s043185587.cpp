#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	long minimum = 1000000, maximum = -1000000, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		long a;
		cin >> a;
		minimum = min(a, minimum);
		maximum = max(a, maximum);
		sum += a;
	}
	cout << minimum << " " << maximum << " " << sum << endl;
	return 0;
}