#include <iostream>
#include <algorithm>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
int main() {
	int a[3], n;
	cin >> n;
	rep(i,n) {
		rep(j,3) {
			cin >> a[j];
		}
		sort(a, a + 3);
		if((a[0] * a[0]) + (a[1] * a[1]) == a[2] * a[2]) {
			cout << "YES" << endl;
		} else { 
			cout << "NO" << endl;
		}
	}
	return 0;
}