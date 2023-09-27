#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cctype>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <sstream>
#include <deque>

#define REP(i, n) for ( int i = 0; i < n; i++ )

using namespace std;

int main() {
    int n;
    
    vector<int> open(30);
    open[0] = 1;
    open[1] = 2;
    open[2] = 4;

    for ( int i = 3; i < 30; i++ ) {
        open[i] = open[i-1] + open[i-2] + open[i-3];
        // cout << i << ":" << open[i] << endl;
    }

    while(cin >>n, n) {
        n -= 1; // 添字に合わせる

        cout << (open[n]/10/365)+1 << endl;
    }
    
    return 0;
}