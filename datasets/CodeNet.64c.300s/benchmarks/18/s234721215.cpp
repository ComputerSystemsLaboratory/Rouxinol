#include <bits/stdc++.h>
using namespace std;

#define rep(i,j) for(int (i)=0;(i)<(int)(j);++(i))

int a[300], n;

int main() {
    a[0] = 1;
    for (int i = 0; i <= 32; ++i) {
        if (i == 0) a[i] = 1;
        else if (i == 1) a[i] = a[i-1];
        else if (i == 2) a[i] = a[i-1]+a[i-2];
        else  a[i] = a[i-1]+a[i-2]+a[i-3];
    }

    while (cin >> n, n) {
        if (a[n]%3650 == 0) cout << a[n]/3650 << endl;
        else cout << a[n]/3650+1 << endl;
    }
}