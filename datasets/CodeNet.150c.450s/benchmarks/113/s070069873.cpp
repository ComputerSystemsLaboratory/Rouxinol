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
    int i=1;
    while(1) {
        int x;
        cin >> x;
        if (x == 0)
            break;
        cout << "Case " << i << ": " << x << endl;
        i++;
    }
    return 0;
}