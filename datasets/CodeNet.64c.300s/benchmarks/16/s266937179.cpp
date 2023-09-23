#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
	unsigned int n;
	int ans = INT_MIN;
	int mi = INT_MAX;
	cin >> n;
	for (unsigned int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (mi < INT_MAX)
			ans = max(ans, x - mi);
		mi = min(mi, x);
	}
	cout << ans << endl;
	return 0;
}
 
