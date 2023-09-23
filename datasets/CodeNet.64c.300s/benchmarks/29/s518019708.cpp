#include <iostream>
using namespace std;

int main() {
	int e;
	while(cin >> e && !(e == 0)) {
		int x,min = e;
		for(int y = 0;y <= 1000;y++) {
			for(int z = 0;z <= 100;z++) {
				x = e - y * y - z * z * z;
				if(x < 0) break;
				
				if(x + y + z < min) {
					min = x + y + z;
				}
			}
		}
		cout << min << endl;
	}
}