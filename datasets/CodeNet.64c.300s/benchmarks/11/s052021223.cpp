#include <iostream>
#include <bits/stdc++.h>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;

int main() {
    int in;

    cin >> in;
    cout << (in / 3600) << ":" << ((in % 3600) / 60) << ":" << (in % 60) << endl;

    return 0;
}