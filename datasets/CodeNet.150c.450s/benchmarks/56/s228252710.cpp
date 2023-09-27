#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;
	long long int S=0LL;
	cin >> n;
	vector<long int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(&a[0], &a[n]);
	for (int i = 0; i < n; i++) {
		S += a[i];
	}
	cout << a[0] << " " <<  a[n - 1] << " "<< S<<endl;
}