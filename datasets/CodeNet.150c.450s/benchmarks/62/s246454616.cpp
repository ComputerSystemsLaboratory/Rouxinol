#include<iostream>
using namespace std;
int main() {
	int x,y,z;
	cin >> x >> y >> z;
	if (x <= y && x <= z && y <= z) {
		cout << x <<" "<< y <<" "<< z << endl;
	}
	else if (x <= z && x <= y && z <= y) {
		cout << x <<" "<< z <<" "<< y << endl;
	}
	else if (y<=x && y<=z && x<=z) {
		cout << y<<" "<<x<<" "<<z << endl;
	}
	else if (y<=z && y<=x && z<=x) {
		cout << y<<" "<<z<<" "<<x << endl;
	}
	else if (z<=x && z<=y && x<=y) {
		cout << z<<" "<<x<<" "<<y << endl;
	}
	else if (z<=y && z<=x &&y<=x) {
		cout << z<<" "<<y<<" "<<x << endl;
	}
}
