#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <set>

using namespace std;
int w[1000001];
int n,k;
bool ok(int P) {
	int t = 0;
	int count = 1;
	for (int i = 0; i < n; i++) {
		if (w[i] <= P ) {
		if (t + w[i] <= P ) 
			t += w[i];
		else {
			t = w[i];
			count += 1;
			}
		}
		else count = k+1;
	}
	return count <= k ;
}
int main() {
	cin >> n >> k ;
	for (int j = 0; j < n; j++ ) {
		cin >> w[j];
	}
	int l = 0, h = 10000000000;
	while ( l + 1 < h ) {
		int m = (l+h)/2;
		if( ok(m) ) h = m; 
		else l = m;
	}
	cout << h << endl;
}