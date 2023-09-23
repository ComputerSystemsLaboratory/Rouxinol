#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

	int n;
	cin >> n;

	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}

	reverse(a, a+n);
	for(int i=0;i<n;i++) {
		cout << a[i];
		if(i != n-1) {
			cout << " ";
		}
	}
	cout << endl;

	return 0;
}