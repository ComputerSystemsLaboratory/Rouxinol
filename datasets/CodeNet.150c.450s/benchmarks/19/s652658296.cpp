#include <iostream>
using namespace std;

int main() {
	int x, y;

	for(int i=0; i<10000; i++) {
		cin >> x >> y;
		if(x==0 && y==0) {
			break;
		}
		if(x < y) {
			cout << x << " " << y << endl;
		}else if(x > y) {
			cout << y << " " << x << endl;
		}else {
			cout << x << " " << y << endl;
		}
	}

	return 0;
}
