#include <iostream>
#include <algorithm>

using namespace std;
 
int main() {
	int n,r[200000],minr = 2000000000,ans = -2000000000;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> r[i];
	for(int i = 0; i < n; i++) {
		ans = max(r[i] - minr,ans);
		minr = min(r[i],minr);
	}

	cout << ans << endl;
	return 0;
}