#include <iostream>

using namespace std;

int main() {
	int a; cin >> a;
	for (int i = 1; i <= a; i++) {
	    if (i % 3 == 0) cout << " " << i;
	    else {
	        int o = i;
	        if (o % 10 == 3) {
	            cout << " " << i;
	        } else {
	            while (o > 10) {
	                o = o / 10;
	                if (o % 10 == 3) { 
	                    cout << " " << i;
	                    break;
	                }
                }
	        }
	    }
	}
	cout << endl;
}

