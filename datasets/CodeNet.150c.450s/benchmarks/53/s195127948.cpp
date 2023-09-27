#include <cmath>
#include <iostream>
using namespace std;

/*int a[1000000001];
int devidenumber(int m) {
	if(a[m]!=0) return m/a[m];
	else {
		int k=2;
		while(m%k!=0) ++k;
		a[m]=k;
		return m/k;
	}
}
*/

int n;
int main() {
	cin >> n;
	cout << n << ":";
	while(n !=1) {
		int k=2;
		while((n%k!=0) && (k <= sqrt(n))) ++k;
		if (k > sqrt(n)) {
			cout << " " << n;
			break;
		} else {
			n = n/k;
			cout << " " << k;
			k=2;
		}
	}
	cout << endl;
}