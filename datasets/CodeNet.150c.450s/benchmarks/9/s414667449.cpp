#include <iostream>
#include <string>
using namespace std;

int main() {
	string w;
	int a, c, b;
	while (cin >> w >> a) {
	    if (w == "-") break;
	    for (int i = 0; i < a; i++) {
	        cin >> b;
	        w = w.substr(b) + w.substr(0, b);
	    }
	    cout << w << endl;
	}
}

