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
			int at = a*x/100;
			int bt = s-at;
			
			for(int b = ((bt+1)*100/x); (b*x/100) >= bt && b>0; b--) {
				if ( (b*x/100) != bt ) { continue; }
				int newsum = a*y/100 + b*y/100;
				if ( newsum > max ) { max = newsum; }
			}
		}

		cout << max << std::endl;
	}
}