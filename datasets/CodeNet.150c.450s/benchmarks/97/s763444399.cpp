#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main (void) {

    int ox[4] = {-1, 0, 1, 0};
    int oy[4] = {0, 1, 0, -1};

    do {
        unsigned int data_size;
        cin >> data_size;
        if (data_size == 0) { break; }

        int xs[data_size];
        int ys[data_size];

        xs[0] = 0;
        ys[0] = 0;

        int n, d;
        unsigned int i = 1;
        while (i < data_size) {
            cin >> n >> d;

            xs[i] = xs[n] + ox[d];
            ys[i] = ys[n] + oy[d];

            i++;
        }

        int xmin=0, xmax=0, ymin=0, ymax=0;

        for (int j=0; j<data_size; j++) {
            xmin = min(xmin, xs[j]);
            xmax = max(xmax, xs[j]);
            ymin = min(ymin, ys[j]);
            ymax = max(ymax, ys[j]);
        }

        cout << abs(xmin) + xmax + 1 << ' ' << abs(ymin) + ymax + 1<< endl;

    } while (true);

    return 0;
}