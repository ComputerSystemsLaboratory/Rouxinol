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

int main() {
    int n;
    cin >> n;
    int a[n];
    REP(i, n) cin >> a[i];
    REP(i, n){
        int key = a[i];
        int j;
        for(j = i-1; (j >= 0 && a[j] > key); j--) {
            a[j+1] = a[j];
        }
        a[j+1] = key;
        REP(i, n-1) cout << a[i] << " ";
        cout << a[n-1] << endl;
    }

    return 0;
}