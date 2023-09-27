#include <iostream>
using namespace std;

int main(void) {
	while(true) {
		int x, y, s;
		cin >> x >> y >> s;
		if ( x == 0 ) { break; }
		x += 100;
		y += 100;

		int max = 0;

		for(int a=1; a<s; a++) {
			for(int b=1; b<s; b++) {
				if ( (a*x/100 + b*x/100) == s ) {
					int newsum = a*y/100 + b*y/100;
					if ( newsum > max ) { max = newsum; }
				}
			}
		}

		cout << max << std::endl;
	}
}