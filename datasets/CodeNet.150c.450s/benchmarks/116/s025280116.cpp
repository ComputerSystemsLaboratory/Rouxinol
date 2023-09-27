#include <math.h>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	while(true) {
		int n;
		int k;
		cin >> n >> k;
		if ( n == 0 ) break;
		vector<int> a;
		int c;
		for ( int i = 0; i < n ; i++ ) {
			cin >> c;
			a.push_back(c);
		}
		c = 0;
		for ( int i = 0; i < k; i++ ) {
			c += a[i];
		}
		int s = c;
		for ( int i = 0; i < n - k; i++ ) {
			c -= a[i];
			c += a[i+k];
			s = max(s,c);
		}
		cout << s << endl;
	}
	return 0;
}