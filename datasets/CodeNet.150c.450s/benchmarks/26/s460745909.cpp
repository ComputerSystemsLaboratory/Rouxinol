#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if(a >= -1000 && a <= 1000 && b >= -1000 && b <= 1000){
		if (a > b) {
			cout << "a > b" << endl;
		}
		else if (a < b) {
			cout << "a < b" << endl;
		}
		else {
			cout << "a == b" << endl;
		}
	}
	else {
		cout << "error" << endl;
	}
}
