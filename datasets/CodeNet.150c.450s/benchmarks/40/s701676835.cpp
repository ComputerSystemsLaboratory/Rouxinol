#include <iostream>
using namespace std;

int main(void) {
    int t, d[6];
    string c;
    for (int i = 0; i < 6; i++) cin >> d[i];
    cin >> c;
    for (int i = 0; i < c.size(); i++) {
        if (c[i] == 'E') {
            t = d[0];
            d[0] = d[3];
            d[3] = d[5];
            d[5] = d[2];
            d[2] = t;
        }
        if (c[i] == 'W') {
            t = d[0];
            d[0] = d[2];
            d[2] = d[5];
            d[5] = d[3];
            d[3] = t;
        }
        if (c[i] == 'S') {
            t = d[0];
            d[0] = d[4];
            d[4] = d[5];
            d[5] = d[1];
            d[1] = t;
        }
        if (c[i] == 'N') {
            t = d[0];
            d[0] = d[1];
            d[1] = d[5];
            d[5] = d[4];
            d[4] = t;
        }
    }
    cout << d[0] << endl;
    return 0;
}