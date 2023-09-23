#include <iostream>
#include <algorithm>
using namespace std;

#define rep(i,x,y) for(int (i)=(x);i<(y);(i)++)

int main()
{
	int x, y, sum;
	
	while (true) {
		cin >> x >> y >> sum;
		if (x == 0 && y == 0 && sum == 0) {
			break;
		}

		int maxsum = 0;
		rep(i, 1, sum + 1) {
			rep(j, 1, sum + 1) {
				if (i*(100 + x) / 100 + j*(100 + x) / 100 > sum) {
					break;
				}
				if (i*(100 + x) / 100 + j*(100 + x) / 100 == sum) {
					maxsum = max(i*(100 + y) / 100 + j*(100 + y) / 100, maxsum);
				}
			}
		}
		cout << maxsum << endl;
	}

	return 0;
}