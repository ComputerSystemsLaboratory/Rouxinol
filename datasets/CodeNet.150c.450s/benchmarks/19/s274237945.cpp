#include <iostream>
using namespace std;

int main() {
	int x, y;
	while(cin >> x >> y) {
		if(x != 0 | y != 0) { 
			cout << ((x < y) ? x : y ) << " " << ((x < y) ? y : x) << endl; 
		}
		else break;

	}
		return 0;
}