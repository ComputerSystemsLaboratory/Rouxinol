#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>
#include <vector>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    int x, y;
    while(1) {
        cin >> x >> y;
        if (x == 0 && y == 0)
            break;
        cout << (x < y ? x : y) << " " << (x < y ? y : x) << endl;
    }
    return 0;
}