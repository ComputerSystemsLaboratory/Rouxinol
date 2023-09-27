#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int gmc(int x, int y) {
	
	if (x<=y) {
		swap(x, y);
	}
	if (y==0) return x;
	
	return gmc(y, x%y);
}

int main() {
	
	int x, y;
	cin >> x >> y;
	
	cout << gmc(x, y) << "\n";
	
	return 0;
}