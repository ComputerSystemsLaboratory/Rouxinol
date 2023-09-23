#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const long long int INF = 1e18;

using namespace std;


int main() {
    int n;
    cin >> n;
    long long int a;
    long long int minimum = INF;
    long long int profit = -INF;
    REP(i, n) {
        cin >> a;
        profit = max(profit, a - minimum);
        minimum = min(minimum, a);
    }

    cout << profit << endl;

    return 0;
}