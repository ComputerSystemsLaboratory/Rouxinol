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
    int n;
    int max = -INF, min = INF;
    long long sum = 0;
    cin >> n;
    REP(i, n){
        int x;
        cin >> x;
        if (x > max)
            max = x;
        if (x < min)
            min = x;
        sum += x;
    }
    if (n == 0) {
        min = 0;
        max = 0;
        sum = 0;
    }
    cout << min << " " << max << " " << sum << endl;

    return 0;
}