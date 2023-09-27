#include <iostream>
using namespace std;

float x1, y1, x2, y2, x3, y3, x4, y4;

int main(void) {
	int n;
	cin >> n;
	bool flag;
	while (n--) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		if (x1 == x2 && x3 == x4) {
			flag = true;
		} else if (((y2 - y1) / (x2 - x1)) == ((y4 - y3) / (x4 - x3))){
			flag = true;
		} else {
			flag = false;
		}
		if (flag) 
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}
