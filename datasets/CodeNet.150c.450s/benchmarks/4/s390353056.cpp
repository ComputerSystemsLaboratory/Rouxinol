#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

void solve7a(int m, int f, int r) {
    if (m == -1 || f == -1) {
        cout << "F" << endl;
    }else if (m+f >= 80) {
        cout << "A" << endl;
    }else if (m+f >= 65) {
        cout << "B" << endl;
    }else if (m+f >= 50) {
        cout << "C" << endl;
    }else if (m+f >= 30) {
        if (r >= 50) {
            cout << "C" << endl;
        }else {
            cout << "D" << endl;
        }
    }else {
        cout << "F" << endl;
    }
}

int main() {
    int m, f, r;
    while(cin >> m >> f >> r, m+f+r+3) {
        solve7a(m,f,r);
    }
    return 0;
}