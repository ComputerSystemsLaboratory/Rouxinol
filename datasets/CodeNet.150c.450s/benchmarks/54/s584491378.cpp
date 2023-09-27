#include <iostream>
using namespace std;

int main() {
	string w, t;
	int a = 0;
	cin >> w;
	while (cin >> t) {
	    if (t == "END_OF_TEXT") break;
	    for (int i = 0; i < t.size(); i++) {
	        if (t[i] >= 'A' && t[i] <= 'Z') t[i] += 32;
	    }
	    if (t == w) a++;
	}
	cout << a << endl;
}

