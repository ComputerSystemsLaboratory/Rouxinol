#include <iostream>
using namespace std;
int X, Y, S;
int solve() {
	int maximum = 0;
	for (int i = 1; i < S; i++) {
		for (int j = S; j >= i; j--) {
			if ((int)(i*(100 + X) / 100) + (int)(j*(100 + X) / 100) == S) {
				if ((int)(i*(100 + Y) / 100) + (int)(j*(100 + Y) / 100) > maximum) {
					maximum = (int)(i*(100 + Y) / 100) + (int)(j*(100 + Y) / 100);
				}
			}
		}

		
	}
	return maximum;
}
int main(){
	 while (cin >> X >> Y >> S && X > 0) {
		 cout << solve() << endl;
		
	}
	
}
