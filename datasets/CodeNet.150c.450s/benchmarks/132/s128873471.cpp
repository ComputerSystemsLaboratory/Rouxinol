#include <iostream>
using namespace std;

int main() {
	int n, p;
	
	while (cin >> n >> p) {
		if (!n) break;
		
		int i;
		int stones[50] = {0};
		int wan = p;
		
		for (i = 0; ; i = (i + 1) % n) {
			if (wan > 0) {
				wan--;
				stones[i]++;
				if (stones[i] == p) {
					break;
				}
			}
			else {
				wan = stones[i];
				stones[i] = 0;
			}
		}
		cout << i << endl;
	}
	return 0;
}