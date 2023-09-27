#include <iostream>
#include <bits/stdc++.h>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;
    cout << (a * b) << " " << (2 * (a+b)) << endl;

    return 0;
}