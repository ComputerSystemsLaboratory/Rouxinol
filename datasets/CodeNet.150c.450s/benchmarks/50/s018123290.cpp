#include <iostream>

using namespace std;

int main() {

	int n;

	while(cin >> n) {
		if(!n) {
			break;
		}
		int t=0;
		n=1000-n;
		while(n>=500) {
			n-=500;
			t++;
		}
		while(n>=100) {
			n-=100;
			t++;
		}
		while(n>=50) {
			n-=50;
			t++;
		}
		while(n>=10) {
			n-=10;
			t++;
		}
		while(n>=5) {
			n-=5;
			t++;
		}
		while(n>=1) {
			n-=1;
			t++;
		}

		cout << t << endl;
	}

	return 0;

}