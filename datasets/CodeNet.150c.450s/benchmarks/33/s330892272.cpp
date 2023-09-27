#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int tax(int a, int x)
{
	return a * (100 + x) / 100;
}

int main(void)
{
	int x, y, s;

	while (cin >> x >> y >> s, s){
		int ret = -1;
		for (int i = 1; i < s; i++){
			for (int j = 1; j < s; j++){
				if (tax(i, x) + tax(j, x) == s){
					// ok
					int now = tax(i, y) + tax(j, y);
					ret = max(ret, now);
				}
			}
		}
		cout << ret << endl;
	}

	return 0;
}