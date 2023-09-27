#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int x,y,s;
	while (cin >> x >> y >> s, x) {
		int res = 0;
		for (int p1 = 1; p1 <= s/2; ++p1) {
			for (int p2 = 1; p2 < s; ++p2) {
				int p3 = ((p1*(100+x))/100) + ((p2*(100+x))/100);
				if (p3 == s) {
					int r = ((p1*(100+y))/100) + ((p2*(100+y))/100);
					res = max(res,r);
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}