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
    int t;
    vector<int> a;
    REP(i, 3) {
        cin >> t;
        a.push_back(t);
    }
    sort(ALL(a));

    REP(i, 2) cout << a[i] << " ";
    cout << a[2] << endl;
    return 0;
}