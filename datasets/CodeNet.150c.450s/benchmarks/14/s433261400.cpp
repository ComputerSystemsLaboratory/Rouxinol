#include <iostream>
using namespace std;
int main() {
	int x,y;
	y = 1;
	cin >> x; 
	for ( ; y<=x; y=y+1) {
		if (y % 3 == 0) {
			cout << " " << y ;
		}
		else if (y % 10 == 3) {
			cout << " " << y ;
		}
		else if (y%100/10 == 3 || y%1000/100 == 3 || y%10000/1000 == 3) {
			cout << " " << y;
		}
	}
	cout << endl;
}
