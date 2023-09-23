#include <iostream>

using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	while(y){
		int t = x%y;
		x = y;
		y = t;
	}
	cout << x << endl;
}