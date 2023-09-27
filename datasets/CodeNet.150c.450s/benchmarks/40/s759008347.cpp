#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    int d[6],u = 1, f = 2, r = 3, t;
    char move;
    for (int i = 0; i < 6; i++) {
        cin >> d[i];
    }
    while (cin >> move) {
        switch (move) {
            case 'N':t = u; u = f; f = 7 - t; break;
            case 'S':t = f; f = u; u = 7 - t; break;
            case 'E':t = r; r = u; u = 7 - t; break;
            case 'W':t = u; u = r; r = 7 - t; break;
            default: cout << "error" << endl; break;
        }
        // printf("u:%d f:%d r:%d\n", u, f, r);
    }
    cout << d[u-1] << endl;
    return 0;
}