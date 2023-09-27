#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	int n, x;
	while ( cin >> n >> x, n || x ) {
		int ans = 0;
		for (int a = 1; a <= n; ++a)
			for (int b = a+1; b <= n; ++b)
				for (int c = b+1; c <= n; ++c)
					if (a + b + c == x) ++ans;

		cout << ans << endl;
	}
}