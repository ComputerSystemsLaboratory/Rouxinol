#include <iostream>
#include <vector>
using namespace std;

void printXY(int h, int w)
{
	int min[2] = {150 * 150, 150 * 150};
	for (int y = 1; y <= 149; ++y) {
		for (int x = y + 1; x <= 150; ++x) {
			if (y == x) {
				break;
			}
			int sum = y * y + x * x;
			if (sum >= h * h + w * w && sum < min[0] * min[0] + min[1] * min[1] && !(y == h && x == w)) {
				if (sum == h * h + w * w) {
					if (y > h) {
						min[0] = y;
						min[1] = x;
					}
				} else {
					//if (sum == min[0] * min[0] + min[1] + min)
					//if (y < min[0]) {
						min[0] = y;
						min[1] = x;
					//}
				}
			}


		}
	}

	cout << min[0] << " " << min[1] << endl;
}

int main(void)
{
	while (1) {
		int h, w;
		cin >> h >> w;
		if (h == 0) {
			break;
		}
		printXY(h, w);
		
	}
	return 0;
}
