#include <iostream>
using namespace std;
int main() {
	int i;
	cin >> i;
	long long int a[i-1], s,ma,mi;
	s = 0;
	for (int j = 0; j < i ; j++ ) {
		cin >> a[j] ;
		s = s + a[j];
	}
	mi = a[0];
 	ma = a[0];
	for (int j = 0; j < i; j++) {
		if (ma <  a[j] ) {
			ma = a[j];
		}
		else if (mi > a[j] ) {
			mi = a[j];
		}
	}
	cout << mi << " " << ma << " " << s << endl;
}		