#include <iostream>
using namespace std;

int main() {
	int d[7];
	string q;
	cin >> d[1] >> d[2] >> d[3] >> d[4] >> d[5] >> d[6] >> q;
	for (int i = 0; i < q.length(); i++) {
	    int o;
	    if (q[i] == 'N') {
	        o = d[1];
	        d[1] = d[2];
	        d[2] = d[6];
	        d[6] = d[5];
	        d[5] = o;
	    } else if (q[i] == 'W') {
	        o = d[1];
	        d[1] = d[3];
	        d[3] = d[6];
	        d[6] = d[4];
	        d[4] = o;
	    } else if (q[i] == 'S') {
	        o = d[1];
	        d[1] = d[5];
	        d[5] = d[6];
	        d[6] = d[2];
	        d[2] = o;
	    } else {
	        o = d[1];
	        d[1] = d[4];
	        d[4] = d[6];
	        d[6] = d[3];
	        d[3] = o;
	    }
	}
	cout << d[1] << endl;
}

