#include<iostream>
using namespace std;

int main() {
	int a, b, c, x;
	char r[10000];
	for (int i = 0;; i++) {
		cin >> a >> b >> c;
		if (a == b&&b == c&&c == -1){
			x = i;
			break;
		}
		else if (a == -1 || b == -1){
			r[i] = 'F';
		}else if (a + b >= 80){
			r[i] = 'A';
		}else if (65 <= a + b) {
			r[i] = 'B';
		}else if (50 <= a + b) {
			r[i] = 'C';
		}else if (30 <= a + b) {
			if (c >= 50) {
				r[i] = 'C';
			}else r[i] = 'D';
		}
		else  r[i] = 'F';
	}
	for (int i = 0; i < x; i++){
		cout << r[i] << endl;
	}
}