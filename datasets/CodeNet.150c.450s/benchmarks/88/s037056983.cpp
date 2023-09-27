#include <iostream>
using namespace std;

int main()
{
	int h, w;
	while (cin >> h >> w, h || w) {
		int i = h + 1, j;
		for (int l = h*h + w*w;; l++) {
			for (; i < 150; i++) {
				if (i * i + i > l)
					break;
				for (j = i + 1; j < 150; j++) {
					if (i*i + j*j < l) {
					}
					else if (i*i + j*j == l) {
						goto res;
					}
					else {
						break;
					}
				}
			}
			i = 1;
		}
	res:
		cout << i << " " << j << endl;
	}
	return 0;
}