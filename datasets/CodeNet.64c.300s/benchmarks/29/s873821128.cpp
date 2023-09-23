#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int e;
	while(cin >> e && e > 0) {
		int x, y, z;
		int maxz, maxy;
		int min = 1000000;
		//maxz = int(pow(e, 1.0/3.0));
		//maxy = int(pow(e, 1.0/2.0));
		//cout << "maxz:" << maxz << endl;
		//cout << "maxy:" << maxy << endl;
		for(int z = 0; z*z*z <= e; z++) {
			for(int y = 0; y*y <= e; y++) {
				x = e - y*y - z*z*z;
				if(x >= 0 && x+y+z < min) min = x+y+z;
			}
		}
		cout << min << endl;
	}
}