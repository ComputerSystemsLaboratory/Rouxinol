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
    cin >> n;
    for(int i = 1; i < n+1; i++){
        if(i % 3 == 0) {
            cout << " " << i;
            continue;
        } if (((i / 10) % 10) == 3 || ((i / 100) % 10) == 3 || ((i / 1000) % 10) == 3 || i % 10 == 3)
            cout << " " << i;
    }
    cout << endl;

    return 0;
}