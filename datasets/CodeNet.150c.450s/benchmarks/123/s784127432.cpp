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

const int INF = 1e9;

using namespace std;

bool judge(int n){
    REP(i, sqrt(n) + 1){
        if(i == 0 || i == 1)
            continue;
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    REP(i, n) cin >> a[i];
    REP(i, n) if(judge(a[i])) count++;

    cout << count << endl;

    return 0;
}