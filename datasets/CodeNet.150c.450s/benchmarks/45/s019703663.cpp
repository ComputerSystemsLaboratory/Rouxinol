#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>
using namespace std;
typedef unsigned long ul;

void dec2bin(ul n,  vector<bool>& vb) {
    while (n > 0) {
        vb.push_back(n % 2 == 1);
        n /= 2;
    }
}

int main() {
    ul m, n;
    cin >> m >> n;

    ul X = 1000000007;

    vector<bool> vb;

    dec2bin(n, vb);

    vector<ul> vnMod(vb.size());
    for (size_t i = 0; i < vb.size(); ++i) {
        if (i == 0) {
            vnMod[i] = m;
        }
        else {
            ul prev = vnMod[i - 1];
            vnMod[i] = (prev * prev) % X;
        }
    }

    ul res = 1;
    for (size_t i = 0; i < vb.size(); ++i) {
        if (vb[i]) {
            res = (res * vnMod[i]) % X;
        }
    }

    cout << res << endl;

    return 0;
}
