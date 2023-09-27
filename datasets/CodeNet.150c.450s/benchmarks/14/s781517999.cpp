#include<iostream>
using namespace std;

void call(int n) {
	int x = 0;
	int i = 0;
	while ( ++i <= n ) {
		x = i;
		if ( x % 3 == 0) {
			cout << " " << i;
		} else {
		    do {
			    if ( x % 10 == 3 ) {
			        cout << " " << i;
			        break;
		        } 
		        x /= 10;
		    } while (x); //iなしだと無限に0を上のwhileに返す
		}
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	call(n);
	return 0;
}
