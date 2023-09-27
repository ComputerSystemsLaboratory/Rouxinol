#include<iostream>
#include <cstdio>

using namespace std;

int main() {
	
	int x, y, z = 1;

	cin >> x >> y;

	if (y > x)	swap(x, y);

	while(z){
		z = x % y;
		if (z != 0) {
			x = y;
			y = z;
		}
	}

	cout << y << endl;

	return 0;

}