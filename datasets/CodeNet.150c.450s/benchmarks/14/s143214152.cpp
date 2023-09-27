#include<iostream>
using namespace std;

bool has3(int x);
void call(int n);

int main() {
	int n;
	cin >> n;
	call(n);
	return 0;
}

void call(int n) {
    for ( int x = 1; x <= n; x++ ) {
    	if ( x % 3 == 0 || has3(x) ) {
    		cout << " " << x;
    	}
    }
	cout << endl;
}

bool has3(int x) { //条件を満たすか返すだけ
	while (x) {
		if (x % 10 == 3) return true;
		x /= 10;
	}
	return false;
}

