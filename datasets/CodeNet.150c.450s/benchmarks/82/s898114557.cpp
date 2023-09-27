#include <iostream>
using namespace std;

int main() {
	int d[7], g;
	cin >> d[1] >> d[2] >> d[3] >> d[4] >> d[5] >> d[6] >> g;
	for (int i = 0; i < g; i++) {
	    int x, y; cin >> x >> y;
        if (x != d[1]) {
            if (x == d[2]) {
                int t = d[2];
                d[2] = d[6];
                d[6] = d[5];
                d[5] = d[1];
                d[1] = t;
            } else if (x == d[3]) {
                int t = d[3];
                d[3] = d[6];
                d[6] = d[4];
                d[4] = d[1];
                d[1] = t;
            } else if (x == d[4]) {
                int t = d[4];
                d[4] = d[6];
                d[6] = d[3];
                d[3] = d[1];
                d[1] = t;
            } else if (x == d[5]) {
                int t = d[5];
                d[5] = d[6];
                d[6] = d[2];
                d[2] = d[1];
                d[1] = t;
            } else {
                int t = d[6];
                d[6] = d[1];
                int u = d[2];
                d[2] = d[5];
                d[5] = u;
                d[1] = t;
            }
        }
        if (y != d[2]) {
            if (y == d[3]) {
                int t = d[3];
                d[3] = d[5];
                d[5] = d[4];
                d[4] = d[2];
                d[2] = t;
            } else if (y == d[4]) {
                int t = d[4];
                d[4] = d[5];
                d[5] = d[3];
                d[3] = d[2];
                d[2] = t;
            } else {
	            int t = d[5];
                int u = d[4];
                d[5] = d[2];
                d[2] = t;
                d[4] = d[3];
                d[3] = u;
                }
	    }
	    cout << d[3] << endl;
	}
}

