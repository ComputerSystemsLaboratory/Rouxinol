//
//  main.cpp
//  Exercise
//
//

#include <algorithm>
#include <iostream>
#include <limits>
#include <math.h>
#include <tuple>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "string.h"
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <set>

using namespace std;

using int_t = long long;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2012

int main() {
    vector<int> es;
    while (true) {
        int e;
        scanf("%d", &e);
        if (e == 0) {
            break;
        }
        es.push_back(e);
    }
    for (auto e : es) {
        int sumMin = numeric_limits<int>::max();
        for (int y = 0; y * y <= e; y++) {
            for (int z = 0; z * z * z <= e - y * y; z++) {
                int x = e - y * y - z * z * z;
                sumMin = min(sumMin, x + y + z);
            }
        }
        printf("%d\n", sumMin);
    }
    return 0;
}

