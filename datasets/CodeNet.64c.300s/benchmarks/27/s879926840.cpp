#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, x, ans = 0;
	while (true) {
		cin >> n >> x;
		if (n == 0 && x == 0)
			break;
		ans = 0;
		n = min(n,  x - 3);
		for (int i = n; i > 2; --i) {
		    if ((i - 1)*3 < x) break;
			int r = x - i;
			int y = min(r - 1, i - 1);
			int z = max(1, r - y);
			ans+= (y - z + 1) / 2;
		}
		cout << ans << endl;
	}
	return 0;
}

