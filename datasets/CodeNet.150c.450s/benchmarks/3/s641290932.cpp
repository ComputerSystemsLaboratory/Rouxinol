#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string x, y;
	int a, b, c;
	cin >> x >> a;
	for (int i = 0; i < a; i++) {
	    cin >> y >> b >> c;
	    if (y == "print") {
	        for (int o = b; o <= c; o++) {
	            cout << x[o];
	        }
	        cout << endl;
	    }else if (y == "replace") {
	        string z; cin >> z;
	        for (int o = b; o <= c; o++) {
	            x[o] = z[o - b];
	        }
	    } else if (y == "reverse") {
	        string z = x;
	        for (int o = b; o < c + 1; o++) {
	            x[o] = z[c + b - o];
	        }
	    }
	}
}
