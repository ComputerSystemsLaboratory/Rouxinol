//
//  alds1_1_d_maximum_profit.cpp
//  aoj
//
//  Created by Sei Kataoka on 2/5/16.
//  Copyright ?? 2016 Sei Kataoka. All rights reserved.
//

#include <iostream>

using namespace std;

static const int MAX = 200000;

int main() {
    int n;
    int r[MAX];
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> r[i];

    int maxv = -1000000000;
    int minv = r[0];

    for (int i = 0; i < n - 1; ++i) {
        if (minv > r[i]) minv = r[i];
        if (r[i + 1] - minv > maxv) maxv = r[i + 1] - minv;
    }

    cout << maxv << endl;

    return 0;
}