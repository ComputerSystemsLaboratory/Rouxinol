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
    int a, b, c;
    int count = 0;
    cin >> a >> b >> c;
    for(int i = a ; i < b + 1 ; i++) {
        if(c % i == 0) count++;
    }
    cout << count << endl;
    return 0;
}