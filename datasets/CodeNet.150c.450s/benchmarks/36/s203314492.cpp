#include <iostream>
using namespace std;

int main() {
	int d, x, y;
	while(cin >> d) {
		y = 0;	
		for(int x = d; x < 600; x += d) {
			y += d*x*x;
		}
		cout << y << endl;	
	}
}