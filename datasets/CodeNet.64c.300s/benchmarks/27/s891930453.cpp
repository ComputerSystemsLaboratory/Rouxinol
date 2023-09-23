#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
	while(true) {
		int n, x;
		cin >> n >> x;
		if((n == 0) && (x == 0)) break;

		int count = 0;
		int imax = (x / 3 - 1 < n) ? (x / 3 - 1) : n;
		for(int i = 1; i <= imax; i++) {
			int jmax = (x - i) / 2;
			if(x - i - jmax == jmax) jmax -= 1;
			if(n < jmax) jmax = n;

			for(int j = i + 1; j <= jmax; j++) {
				int k = x - (i + j);
				if(k <= n) {
					count++;
				}
			}
		}
		cout << count << endl;
	}
	
    return 0;
}