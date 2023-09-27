#include <iostream>
using namespace std;

int main(void) {
    int houseList[3][10][4] = {};
    int a, b, f, r, v, i;

    cin >> a;

    for( i = 0; i < a; i++ ) {
        cin >> b >> f >> r >> v;
        houseList[f - 1][r - 1][b - 1] += v;
    }

    int s, t, u;
    for(s = 0; s < 4; s++ ) {
        for(t = 0; t < 3; t++) {
            for(u = 0; u < 10; u++) {
                cout << " " << houseList[t][u][s];
            }
            cout << endl;
        }
        if( s < 3) {
            cout << "####################" << endl;
        }
    }
    return 0;
}